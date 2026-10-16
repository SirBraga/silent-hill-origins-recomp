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

// Function: sub_0015F030
// Address: 0x15f030 - 0x15f138
void sub_0015F030_0x15f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F030_0x15f030");
#endif

    switch (ctx->pc) {
        case 0x15f04cu: goto label_15f04c;
        case 0x15f120u: goto label_15f120;
        default: break;
    }

    ctx->pc = 0x15f030u;

    // 0x15f030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15f034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15f034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15f038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f044: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x15F044u;
    SET_GPR_U32(ctx, 31, 0x15F04Cu);
    ctx->pc = 0x15F048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F044u;
    // 0x15f048: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x15F044u, 0x15F04Cu)) {
        return;
    }
    ctx->pc = 0x15F04Cu;
label_15f04c:
    // 0x15f04c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x15f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15f050: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f054: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15F054u;
    {
        const bool branch_taken_0x15f054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15f054) {
            ctx->pc = 0x15F058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F054u;
            // 0x15f058: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F0A4u;
            goto label_15f0a4;
        }
    }
    ctx->pc = 0x15F05Cu;
    // 0x15f05c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x15f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x15f060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f064: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15F064u;
    {
        const bool branch_taken_0x15f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F064u;
        // 0x15f068: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f064) {
            ctx->pc = 0x15F094u;
            goto label_15f094;
        }
    }
    ctx->pc = 0x15F06Cu;
    // 0x15f06c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F06Cu;
    {
        const bool branch_taken_0x15f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F06Cu;
        // 0x15f070: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f06c) {
            ctx->pc = 0x15F084u;
            goto label_15f084;
        }
    }
    ctx->pc = 0x15F074u;
    // 0x15f074: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15F074u;
    {
        const bool branch_taken_0x15f074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F074u;
        // 0x15f078: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f074) {
            ctx->pc = 0x15F098u;
            goto label_15f098;
        }
    }
    ctx->pc = 0x15F07Cu;
    // 0x15f07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F07Cu;
    {
        const bool branch_taken_0x15f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F07Cu;
        // 0x15f080: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f07c) {
            ctx->pc = 0x15F0A0u;
            goto label_15f0a0;
        }
    }
    ctx->pc = 0x15F084u;
label_15f084:
    // 0x15f084: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F084u;
    {
        const bool branch_taken_0x15f084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F084u;
        // 0x15f088: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f084) {
            ctx->pc = 0x15F098u;
            goto label_15f098;
        }
    }
    ctx->pc = 0x15F08Cu;
    // 0x15f08c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15F08Cu;
    {
        const bool branch_taken_0x15f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x8e030098  lw          $v1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f08c) {
            ctx->pc = 0x15F0A0u;
            goto label_15f0a0;
        }
    }
    ctx->pc = 0x15F094u;
label_15f094:
    // 0x15f094: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f098:
    // 0x15f098: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15f098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x15f09c: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x15f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_15f0a0:
    // 0x15f0a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15f0a4:
    // 0x15f0a4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15F0A4u;
    {
        const bool branch_taken_0x15f0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0A4u;
        // 0x15f0a8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0a4) {
            ctx->pc = 0x15F100u;
            goto label_15f100;
        }
    }
    ctx->pc = 0x15F0ACu;
    // 0x15f0ac: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x15f0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f0b4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15F0B4u;
    {
        const bool branch_taken_0x15f0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0B4u;
        // 0x15f0b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0b4) {
            ctx->pc = 0x15F0ECu;
            goto label_15f0ec;
        }
    }
    ctx->pc = 0x15F0BCu;
    // 0x15f0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F0BCu;
    {
        const bool branch_taken_0x15f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0BCu;
        // 0x15f0c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0bc) {
            ctx->pc = 0x15F0D4u;
            goto label_15f0d4;
        }
    }
    ctx->pc = 0x15F0C4u;
    // 0x15f0c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F0C4u;
    {
        const bool branch_taken_0x15f0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C4u;
        // 0x15f0c8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0c4) {
            ctx->pc = 0x15F0E4u;
            goto label_15f0e4;
        }
    }
    ctx->pc = 0x15F0CCu;
    // 0x15f0cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15F0CCu;
    {
        const bool branch_taken_0x15f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0CCu;
        // 0x15f0d0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0cc) {
            ctx->pc = 0x15F104u;
            goto label_15f104;
        }
    }
    ctx->pc = 0x15F0D4u;
label_15f0d4:
    // 0x15f0d4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F0D4u;
    {
        const bool branch_taken_0x15f0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0D4u;
        // 0x15f0d8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0d4) {
            ctx->pc = 0x15F0F4u;
            goto label_15f0f4;
        }
    }
    ctx->pc = 0x15F0DCu;
    // 0x15f0dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15F0DCu;
    {
        const bool branch_taken_0x15f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0DCu;
        // 0x15f0e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0dc) {
            ctx->pc = 0x15F104u;
            goto label_15f104;
        }
    }
    ctx->pc = 0x15F0E4u;
label_15f0e4:
    // 0x15f0e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15F0E4u;
    {
        const bool branch_taken_0x15f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E4u;
        // 0x15f0e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e4) {
            ctx->pc = 0x15F0F8u;
            goto label_15f0f8;
        }
    }
    ctx->pc = 0x15F0ECu;
label_15f0ec:
    // 0x15f0ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F0ECu;
    {
        const bool branch_taken_0x15f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0ECu;
        // 0x15f0f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0ec) {
            ctx->pc = 0x15F0F8u;
            goto label_15f0f8;
        }
    }
    ctx->pc = 0x15F0F4u;
label_15f0f4:
    // 0x15f0f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15f0f8:
    // 0x15f0f8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x15f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x15f0fc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_15f100:
    // 0x15f100: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15f104:
    // 0x15f104: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x15f108: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F108u;
    {
        const bool branch_taken_0x15f108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15f108) {
            ctx->pc = 0x15F10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F108u;
            // 0x15f10c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F124u;
            goto label_15f124;
        }
    }
    ctx->pc = 0x15F110u;
    // 0x15f110: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15f114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f118: 0xc057a6a  jal         func_15E9A8
    ctx->pc = 0x15F118u;
    SET_GPR_U32(ctx, 31, 0x15F120u);
    ctx->pc = 0x15F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F118u;
    // 0x15f11c: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E9A8u, 0x15F118u, 0x15F120u)) {
        return;
    }
    ctx->pc = 0x15F120u;
label_15f120:
    // 0x15f120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15f120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f124:
    // 0x15f124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F12Cu;
        // 0x15f130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F134u;
    // 0x15f134: 0x0  nop
    ctx->pc = 0x15f134u;
    // NOP
    ctx->pc = 0x15f138u;
}
