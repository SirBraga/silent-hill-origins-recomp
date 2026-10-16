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

// Function: sub_0026C020
// Address: 0x26c020 - 0x26c2c8
void sub_0026C020_0x26c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C020_0x26c020");
#endif

    switch (ctx->pc) {
        case 0x26c100u: goto label_26c100;
        default: break;
    }

    ctx->pc = 0x26c020u;

    // 0x26c020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c024: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c028: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26c028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26c02c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c030: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c038: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26c03c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c040: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x26c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x26c044: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x26c044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26c048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c04c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c050: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26C050u;
    {
        const bool branch_taken_0x26c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C050u;
        // 0x26c054: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c050) {
            ctx->pc = 0x26C0A4u;
            goto label_26c0a4;
        }
    }
    ctx->pc = 0x26C058u;
    // 0x26c058: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c05c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C05Cu;
    {
        const bool branch_taken_0x26c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c05c) {
            ctx->pc = 0x26C070u;
            goto label_26c070;
        }
    }
    ctx->pc = 0x26C064u;
    // 0x26c064: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x26C064u;
    {
        const bool branch_taken_0x26c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C064u;
        // 0x26c068: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c064) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C06Cu;
    // 0x26c06c: 0x0  nop
    ctx->pc = 0x26c06cu;
    // NOP
label_26c070:
    // 0x26c070: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C070u;
    {
        const bool branch_taken_0x26c070 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x26C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C070u;
        // 0x26c074: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c070) {
            ctx->pc = 0x26C08Cu;
            goto label_26c08c;
        }
    }
    ctx->pc = 0x26C078u;
    // 0x26c078: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26c07c: 0xc441babc  lwc1        $f1, -0x4544($v0)
    ctx->pc = 0x26c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c080: 0xc460bacc  lwc1        $f0, -0x4534($v1)
    ctx->pc = 0x26c080u;
    { uint32_t bits = FAST_READ32(0x6ABACCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c084: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x26C084u;
    {
        const bool branch_taken_0x26c084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C084u;
        // 0x26c088: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c084) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C08Cu;
label_26c08c:
    // 0x26c08c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26c090: 0xc440babc  lwc1        $f0, -0x4544($v0)
    ctx->pc = 0x26c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c094: 0xc461bacc  lwc1        $f1, -0x4534($v1)
    ctx->pc = 0x26c094u;
    { uint32_t bits = FAST_READ32(0x6ABACCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c098: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c098u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26c09c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x26C09Cu;
    {
        const bool branch_taken_0x26c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C09Cu;
        // 0x26c0a0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c09c) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C0A4u;
label_26c0a4:
    // 0x26c0a4: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x26c0a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c0ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c0b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26C0B0u;
    {
        const bool branch_taken_0x26c0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0B0u;
        // 0x26c0b4: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0b0) {
            ctx->pc = 0x26C0F8u;
            goto label_26c0f8;
        }
    }
    ctx->pc = 0x26C0B8u;
    // 0x26c0b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c0bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c0c0: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x26C0C0u;
    {
        const bool branch_taken_0x26c0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0C0u;
        // 0x26c0c4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0c0) {
            ctx->pc = 0x26C1D4u;
            goto label_26c1d4;
        }
    }
    ctx->pc = 0x26C0C8u;
    // 0x26c0c8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x26c0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x26c0cc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x26c0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x26c0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c0dc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x26c0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c0e4: 0x0  nop
    ctx->pc = 0x26c0e4u;
    // NOP
    // 0x26c0e8: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0E8u;
            // 0x26c0ec: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1D8u;
            goto label_26c1d8;
        }
    }
    ctx->pc = 0x26C0F0u;
    // 0x26c0f0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x26C0F0u;
    {
        const bool branch_taken_0x26c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0F0u;
        // 0x26c0f4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0f0) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C0F8u;
label_26c0f8:
    // 0x26c0f8: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26C0F8u;
    SET_GPR_U32(ctx, 31, 0x26C100u);
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26C0F8u, 0x26C100u)) {
        return;
    }
    ctx->pc = 0x26C100u;
label_26c100:
    // 0x26c100: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x26c104: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c108: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c10c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26C10Cu;
    {
        const bool branch_taken_0x26c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C10Cu;
        // 0x26c110: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c10c) {
            ctx->pc = 0x26C17Cu;
            goto label_26c17c;
        }
    }
    ctx->pc = 0x26C114u;
    // 0x26c114: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x26c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x26c118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c11c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c120: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C120u;
    {
        const bool branch_taken_0x26c120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C120u;
        // 0x26c124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c120) {
            ctx->pc = 0x26C158u;
            goto label_26c158;
        }
    }
    ctx->pc = 0x26C128u;
    // 0x26c128: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x26c128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x26c12c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c130: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26c130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26c134: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26c134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26c138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c13c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26c13cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26c140: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x26c140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x26c144: 0x0  nop
    ctx->pc = 0x26c144u;
    // NOP
    // 0x26c148: 0x0  nop
    ctx->pc = 0x26c148u;
    // NOP
    // 0x26c14c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x26c14cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x26c150: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26C150u;
    {
        const bool branch_taken_0x26c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C150u;
        // 0x26c154: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c150) {
            ctx->pc = 0x26C1D8u;
            goto label_26c1d8;
        }
    }
    ctx->pc = 0x26C158u;
label_26c158:
    // 0x26c158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c160: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x26c160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26c164: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x26c164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x26c168: 0x0  nop
    ctx->pc = 0x26c168u;
    // NOP
    // 0x26c16c: 0x0  nop
    ctx->pc = 0x26c16cu;
    // NOP
    // 0x26c170: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x26c170u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x26c174: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26C174u;
    {
        const bool branch_taken_0x26c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C174u;
        // 0x26c178: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c174) {
            ctx->pc = 0x26C1D4u;
            goto label_26c1d4;
        }
    }
    ctx->pc = 0x26C17Cu;
label_26c17c:
    // 0x26c17c: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x26c180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c184: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c188: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26C188u;
    {
        const bool branch_taken_0x26c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C188u;
        // 0x26c18c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c188) {
            ctx->pc = 0x26C1C0u;
            goto label_26c1c0;
        }
    }
    ctx->pc = 0x26C190u;
    // 0x26c190: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26c190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26c194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c19c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26c19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26c1a0: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x26c1a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c1a4: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x26c1a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x26c1a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26c1a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26c1ac: 0x0  nop
    ctx->pc = 0x26c1acu;
    // NOP
    // 0x26c1b0: 0x0  nop
    ctx->pc = 0x26c1b0u;
    // NOP
    // 0x26c1b4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x26c1b4u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x26c1b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C1B8u;
    {
        const bool branch_taken_0x26c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1B8u;
        // 0x26c1bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1b8) {
            ctx->pc = 0x26C1D4u;
            goto label_26c1d4;
        }
    }
    ctx->pc = 0x26C1C0u;
label_26c1c0:
    // 0x26c1c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26c1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26c1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c1c8: 0x0  nop
    ctx->pc = 0x26c1c8u;
    // NOP
    // 0x26c1cc: 0x0  nop
    ctx->pc = 0x26c1ccu;
    // NOP
    // 0x26c1d0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x26c1d0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
label_26c1d4:
    // 0x26c1d4: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x26c1d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_26c1d8:
    // 0x26c1d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26c1dc: 0x2462bad0  addiu       $v0, $v1, -0x4530
    ctx->pc = 0x26c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949584));
    // 0x26c1e0: 0xc469bad0  lwc1        $f9, -0x4530($v1)
    ctx->pc = 0x26c1e0u;
    { uint32_t bits = FAST_READ32(0x6ABAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x26c1e4: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x26c1e4u;
    { uint32_t bits = FAST_READ32(0x6ABAF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c1e8: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x26c1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x26c1ec: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x26c1ecu;
    { uint32_t bits = FAST_READ32(0x6ABAF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26c1f0: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x26c1f0u;
    { uint32_t bits = FAST_READ32(0x6ABAF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c1f4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x26c1f4u;
    { uint32_t bits = FAST_READ32(0x6ABAECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c1f8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26c1f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26c1fc: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x26c1fcu;
    { uint32_t bits = FAST_READ32(0x6ABAE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26c200: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x26c200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26c204: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x26c204u;
    { uint32_t bits = FAST_READ32(0x6ABAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c208: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x26c208u;
    { uint32_t bits = FAST_READ32(0x6ABAE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x26c20c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x26c20cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x26c210: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x26c210u;
    { uint32_t bits = FAST_READ32(0x6ABAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x26c214: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x26c214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26c218: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x26c218u;
    { uint32_t bits = FAST_READ32(0x6ABADCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c21c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x26c21cu;
    { uint32_t bits = FAST_READ32(0x6ABAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c220: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x26c220u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x26c224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26c224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26c228: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x26c228u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x26c22c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x26c22cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x26c230: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x26c230u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x26c234: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x26c234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26c238: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x26c238u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x26c23c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x26c23cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x26c240: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x26c240u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x26c244: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x26c244u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26c248: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x26c248u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x26c24c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x26c24cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x26c250: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x26c250u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x26c254: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x26c254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26c258: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x26c258u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x26c25c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C25Cu;
    {
        const bool branch_taken_0x26c25c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x26C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C25Cu;
        // 0x26c260: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c25c) {
            ctx->pc = 0x26C274u;
            goto label_26c274;
        }
    }
    ctx->pc = 0x26C264u;
    // 0x26c264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c268: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x26c268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c26c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26C26Cu;
    {
        const bool branch_taken_0x26c26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C26Cu;
        // 0x26c270: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c26c) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C274u;
label_26c274:
    // 0x26c274: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26c274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c278: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26c27c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26c280: 0x2442bac0  addiu       $v0, $v0, -0x4540
    ctx->pc = 0x26c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949568));
    // 0x26c284: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c288: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26c288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26c28c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x26c28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c290: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c294: 0x2463bab0  addiu       $v1, $v1, -0x4550
    ctx->pc = 0x26c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949552));
    // 0x26c298: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26c298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26c29c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26c29cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26c2a0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x26c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c2a4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x26c2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x26c2a8: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C2A8u;
    {
        const bool branch_taken_0x26c2a8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x26C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2A8u;
        // 0x26c2ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2a8) {
            ctx->pc = 0x26C2B4u;
            goto label_26c2b4;
        }
    }
    ctx->pc = 0x26C2B0u;
    // 0x26c2b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26c2b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26c2b4:
    // 0x26c2b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c2b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c2bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2C0u;
        // 0x26c2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C2C8u;
}
