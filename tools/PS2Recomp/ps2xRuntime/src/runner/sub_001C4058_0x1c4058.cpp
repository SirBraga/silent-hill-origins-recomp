#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4058
// Address: 0x1c4058 - 0x1c4178
void sub_001C4058_0x1c4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4058_0x1c4058");
#endif

    switch (ctx->pc) {
        case 0x1c407cu: goto label_1c407c;
        case 0x1c408cu: goto label_1c408c;
        case 0x1c4094u: goto label_1c4094;
        case 0x1c40d8u: goto label_1c40d8;
        case 0x1c40e8u: goto label_1c40e8;
        case 0x1c40f0u: goto label_1c40f0;
        case 0x1c4150u: goto label_1c4150;
        case 0x1c4160u: goto label_1c4160;
        default: break;
    }

    ctx->pc = 0x1c4058u;

    // 0x1c4058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c405c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4064: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c406c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C406Cu;
    {
        const bool branch_taken_0x1c406c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C406Cu;
        // 0x1c4070: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c406c) {
            ctx->pc = 0x1C40C4u;
            goto label_1c40c4;
        }
    }
    ctx->pc = 0x1C4074u;
    // 0x1c4074: 0xc0710b4  jal         func_1C42D0
    ctx->pc = 0x1C4074u;
    SET_GPR_U32(ctx, 31, 0x1C407Cu);
    ctx->pc = 0x1C4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4074u;
    // 0x1c4078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C42D0u, 0x1C4074u, 0x1C407Cu)) {
        return;
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0xc62c02d0  lwc1        $f12, 0x2D0($s1)
    ctx->pc = 0x1c407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4084: 0xc0710fa  jal         func_1C43E8
    ctx->pc = 0x1C4084u;
    SET_GPR_U32(ctx, 31, 0x1C408Cu);
    ctx->pc = 0x1C4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4084u;
    // 0x1c4088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43E8u, 0x1C4084u, 0x1C408Cu)) {
        return;
    }
    ctx->pc = 0x1C408Cu;
label_1c408c:
    // 0x1c408c: 0xc0710e8  jal         func_1C43A0
    ctx->pc = 0x1C408Cu;
    SET_GPR_U32(ctx, 31, 0x1C4094u);
    ctx->pc = 0x1C4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C408Cu;
    // 0x1c4090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43A0u, 0x1C408Cu, 0x1C4094u)) {
        return;
    }
    ctx->pc = 0x1C4094u;
label_1c4094:
    // 0x1c4094: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C4094u;
    {
        const bool branch_taken_0x1c4094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4094u;
        // 0x1c4098: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4094) {
            ctx->pc = 0x1C4120u;
            goto label_1c4120;
        }
    }
    ctx->pc = 0x1C409Cu;
    // 0x1c409c: 0x8e2202e8  lw          $v0, 0x2E8($s1)
    ctx->pc = 0x1c409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x1c40a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C40A0u;
    {
        const bool branch_taken_0x1c40a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A0u;
        // 0x1c40a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40a0) {
            ctx->pc = 0x1C40B8u;
            goto label_1c40b8;
        }
    }
    ctx->pc = 0x1C40A8u;
    // 0x1c40a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c40ac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c40b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C40B0u;
    {
        const bool branch_taken_0x1c40b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B0u;
        // 0x1c40b4: 0x8c4543d8  lw          $a1, 0x43D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40b0) {
            ctx->pc = 0x1C4128u;
            goto label_1c4128;
        }
    }
    ctx->pc = 0x1C40B8u;
label_1c40b8:
    // 0x1c40b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c40bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C40BCu;
    {
        const bool branch_taken_0x1c40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40BCu;
        // 0x1c40c0: 0x8c4543d0  lw          $a1, 0x43D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40bc) {
            ctx->pc = 0x1C4128u;
            goto label_1c4128;
        }
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c40c8: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C40C8u;
    {
        const bool branch_taken_0x1c40c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C8u;
        // 0x1c40cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c8) {
            ctx->pc = 0x1C4158u;
            goto label_1c4158;
        }
    }
    ctx->pc = 0x1C40D0u;
    // 0x1c40d0: 0xc0710b4  jal         func_1C42D0
    ctx->pc = 0x1C40D0u;
    SET_GPR_U32(ctx, 31, 0x1C40D8u);
    ctx->pc = 0x1C40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40D0u;
    // 0x1c40d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C42D0u, 0x1C40D0u, 0x1C40D8u)) {
        return;
    }
    ctx->pc = 0x1C40D8u;
label_1c40d8:
    // 0x1c40d8: 0xc62c02d0  lwc1        $f12, 0x2D0($s1)
    ctx->pc = 0x1c40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c40dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c40dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40e0: 0xc0710fa  jal         func_1C43E8
    ctx->pc = 0x1C40E0u;
    SET_GPR_U32(ctx, 31, 0x1C40E8u);
    ctx->pc = 0x1C40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40E0u;
    // 0x1c40e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43E8u, 0x1C40E0u, 0x1C40E8u)) {
        return;
    }
    ctx->pc = 0x1C40E8u;
label_1c40e8:
    // 0x1c40e8: 0xc0710e8  jal         func_1C43A0
    ctx->pc = 0x1C40E8u;
    SET_GPR_U32(ctx, 31, 0x1C40F0u);
    ctx->pc = 0x1C40ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40E8u;
    // 0x1c40ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C43A0u, 0x1C40E8u, 0x1C40F0u)) {
        return;
    }
    ctx->pc = 0x1C40F0u;
label_1c40f0:
    // 0x1c40f0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C40F0u;
    {
        const bool branch_taken_0x1c40f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40F0u;
        // 0x1c40f4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40f0) {
            ctx->pc = 0x1C4120u;
            goto label_1c4120;
        }
    }
    ctx->pc = 0x1C40F8u;
    // 0x1c40f8: 0x8e2202e8  lw          $v0, 0x2E8($s1)
    ctx->pc = 0x1c40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x1c40fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C40FCu;
    {
        const bool branch_taken_0x1c40fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40FCu;
        // 0x1c4100: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40fc) {
            ctx->pc = 0x1C4114u;
            goto label_1c4114;
        }
    }
    ctx->pc = 0x1C4104u;
    // 0x1c4104: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c4108: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c410c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C410Cu;
    {
        const bool branch_taken_0x1c410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C410Cu;
        // 0x1c4110: 0x8c4543d8  lw          $a1, 0x43D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c410c) {
            ctx->pc = 0x1C4128u;
            goto label_1c4128;
        }
    }
    ctx->pc = 0x1C4114u;
label_1c4114:
    // 0x1c4114: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c4114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c4118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4118u;
    {
        const bool branch_taken_0x1c4118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4118u;
        // 0x1c411c: 0x8c4543d0  lw          $a1, 0x43D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4118) {
            ctx->pc = 0x1C4128u;
            goto label_1c4128;
        }
    }
    ctx->pc = 0x1C4120u;
label_1c4120:
    // 0x1c4120: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c4124: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1c4124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
label_1c4128:
    // 0x1c4128: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x1c412c: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C412Cu;
    {
        const bool branch_taken_0x1c412c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C412Cu;
        // 0x1c4130: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c412c) {
            ctx->pc = 0x1C4164u;
            goto label_1c4164;
        }
    }
    ctx->pc = 0x1C4134u;
    // 0x1c4134: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c4138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4138u;
    {
        const bool branch_taken_0x1c4138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4138u;
        // 0x1c413c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4138) {
            ctx->pc = 0x1C4168u;
            goto label_1c4168;
        }
    }
    ctx->pc = 0x1C4140u;
    // 0x1c4140: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c4140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c4144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c4144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4148: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1C4148u;
    SET_GPR_U32(ctx, 31, 0x1C4150u);
    ctx->pc = 0x1C414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4148u;
    // 0x1c414c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C4148u, 0x1C4150u)) {
        return;
    }
    ctx->pc = 0x1C4150u;
label_1c4150:
    // 0x1c4150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4150u;
    {
        const bool branch_taken_0x1c4150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4150u;
        // 0x1c4154: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4150) {
            ctx->pc = 0x1C4164u;
            goto label_1c4164;
        }
    }
    ctx->pc = 0x1C4158u;
label_1c4158:
    // 0x1c4158: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1C4158u;
    SET_GPR_U32(ctx, 31, 0x1C4160u);
    ctx->pc = 0x1C415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4158u;
    // 0x1c415c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C4158u, 0x1C4160u)) {
        return;
    }
    ctx->pc = 0x1C4160u;
label_1c4160:
    // 0x1c4160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4164:
    // 0x1c4164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4168:
    // 0x1c4168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c416c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C416Cu;
        // 0x1c4170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4174u;
    // 0x1c4174: 0x0  nop
    ctx->pc = 0x1c4174u;
    // NOP
    ctx->pc = 0x1c4178u;
}
