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

// Function: sub_001A9048
// Address: 0x1a9048 - 0x1a9120
void sub_001A9048_0x1a9048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9048_0x1a9048");
#endif

    switch (ctx->pc) {
        case 0x1a9048u: goto label_1a9048;
        case 0x1a904cu: goto label_1a904c;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9054u: goto label_1a9054;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a905cu: goto label_1a905c;
        case 0x1a9060u: goto label_1a9060;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9068u: goto label_1a9068;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9070u: goto label_1a9070;
        case 0x1a9074u: goto label_1a9074;
        case 0x1a9078u: goto label_1a9078;
        case 0x1a907cu: goto label_1a907c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9084u: goto label_1a9084;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a908cu: goto label_1a908c;
        case 0x1a9090u: goto label_1a9090;
        case 0x1a9094u: goto label_1a9094;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a90a8u: goto label_1a90a8;
        case 0x1a90acu: goto label_1a90ac;
        case 0x1a90b0u: goto label_1a90b0;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90bcu: goto label_1a90bc;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a90c4u: goto label_1a90c4;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a90d0u: goto label_1a90d0;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a90fcu: goto label_1a90fc;
        case 0x1a9100u: goto label_1a9100;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9108u: goto label_1a9108;
        case 0x1a910cu: goto label_1a910c;
        case 0x1a9110u: goto label_1a9110;
        case 0x1a9114u: goto label_1a9114;
        case 0x1a9118u: goto label_1a9118;
        case 0x1a911cu: goto label_1a911c;
        default: break;
    }

    ctx->pc = 0x1a9048u;

label_1a9048:
    // 0x1a9048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a904c:
    // 0x1a904c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a9050:
    // 0x1a9050: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a9050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a9054:
    // 0x1a9054: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a9054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a9058:
    // 0x1a9058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a9058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a905c:
    // 0x1a905c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a905cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9060:
    // 0x1a9060: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a9060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a9064:
    // 0x1a9064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9068:
    // 0x1a9068: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a9068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a906c:
    // 0x1a906c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9070:
    // 0x1a9070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9074:
    // 0x1a9074: 0x2404020c  addiu       $a0, $zero, 0x20C
    ctx->pc = 0x1a9074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_1a9078:
    // 0x1a9078: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x1a9078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_1a907c:
    // 0x1a907c: 0x2653002c  addiu       $s3, $s2, 0x2C
    ctx->pc = 0x1a907cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_1a9080:
    // 0x1a9080: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1a9084:
    // 0x1a9084: 0xc0808f0  jal         func_2023C0
label_1a9088:
    if (ctx->pc == 0x1A9088u) {
        ctx->pc = 0x1A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9084u;
        // 0x1a9088: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A908Cu;
        goto label_1a908c;
    }
    ctx->pc = 0x1A9084u;
    SET_GPR_U32(ctx, 31, 0x1A908Cu);
    ctx->pc = 0x1A9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9084u;
    // 0x1a9088: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1A9084u, 0x1A908Cu)) {
        return;
    }
    ctx->pc = 0x1A908Cu;
label_1a908c:
    // 0x1a908c: 0xc06a644  jal         func_1A9910
label_1a9090:
    if (ctx->pc == 0x1A9090u) {
        ctx->pc = 0x1A9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A908Cu;
        // 0x1a9090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9094u;
        goto label_1a9094;
    }
    ctx->pc = 0x1A908Cu;
    SET_GPR_U32(ctx, 31, 0x1A9094u);
    ctx->pc = 0x1A9090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A908Cu;
    // 0x1a9090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9910u, 0x1A908Cu, 0x1A9094u)) {
        return;
    }
    ctx->pc = 0x1A9094u;
label_1a9094:
    // 0x1a9094: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a9094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_1a9098:
    // 0x1a9098: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1a909c:
    // 0x1a909c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a90a0:
    // 0x1a90a0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1a90a4:
    // 0x1a90a4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a90a8:
    // 0x1a90a8: 0xc0f809  jalr        $a2
label_1a90ac:
    if (ctx->pc == 0x1A90ACu) {
        ctx->pc = 0x1A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90A8u;
        // 0x1a90ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90B0u;
        goto label_1a90b0;
    }
    ctx->pc = 0x1A90A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A90B0u);
        ctx->pc = 0x1A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90A8u;
        // 0x1a90ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A90A8u, 0x1A90B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A90B0u;
label_1a90b0:
    // 0x1a90b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a90b4:
    // 0x1a90b4: 0xc0808f0  jal         func_2023C0
label_1a90b8:
    if (ctx->pc == 0x1A90B8u) {
        ctx->pc = 0x1A90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90B4u;
        // 0x1a90b8: 0x24040194  addiu       $a0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90BCu;
        goto label_1a90bc;
    }
    ctx->pc = 0x1A90B4u;
    SET_GPR_U32(ctx, 31, 0x1A90BCu);
    ctx->pc = 0x1A90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90B4u;
    // 0x1a90b8: 0x24040194  addiu       $a0, $zero, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1A90B4u, 0x1A90BCu)) {
        return;
    }
    ctx->pc = 0x1A90BCu;
label_1a90bc:
    // 0x1a90bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a90c0:
    // 0x1a90c0: 0xc06a516  jal         func_1A9458
label_1a90c4:
    if (ctx->pc == 0x1A90C4u) {
        ctx->pc = 0x1A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C0u;
        // 0x1a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90C8u;
        goto label_1a90c8;
    }
    ctx->pc = 0x1A90C0u;
    SET_GPR_U32(ctx, 31, 0x1A90C8u);
    ctx->pc = 0x1A90C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90C0u;
    // 0x1a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9458u, 0x1A90C0u, 0x1A90C8u)) {
        return;
    }
    ctx->pc = 0x1A90C8u;
label_1a90c8:
    // 0x1a90c8: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x1a90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
label_1a90cc:
    // 0x1a90cc: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_1a90d0:
    // 0x1a90d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a90d4:
    // 0x1a90d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1a90d8:
    // 0x1a90d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1a90dc:
    // 0x1a90dc: 0x40f809  jalr        $v0
label_1a90e0:
    if (ctx->pc == 0x1A90E0u) {
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90DCu;
        // 0x1a90e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90E4u;
        goto label_1a90e4;
    }
    ctx->pc = 0x1A90DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A90E4u);
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90DCu;
        // 0x1a90e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A90DCu, 0x1A90E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A90E4u;
label_1a90e4:
    // 0x1a90e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a90e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a90e8:
    // 0x1a90e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a90ec:
    if (ctx->pc == 0x1A90ECu) {
        ctx->pc = 0x1A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E8u;
        // 0x1a90ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90F0u;
        goto label_1a90f0;
    }
    ctx->pc = 0x1A90E8u;
    {
        const bool branch_taken_0x1a90e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E8u;
        // 0x1a90ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e8) {
            ctx->pc = 0x1A9108u;
            goto label_1a9108;
        }
    }
    ctx->pc = 0x1A90F0u;
label_1a90f0:
    // 0x1a90f0: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_1a90f4:
    // 0x1a90f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a90f8:
    // 0x1a90f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a90fc:
    // 0x1a90fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a9100:
    // 0x1a9100: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a9100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a9104:
    // 0x1a9104: 0xae43004c  sw          $v1, 0x4C($s2)
    ctx->pc = 0x1a9104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
label_1a9108:
    // 0x1a9108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a9108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a910c:
    // 0x1a910c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a910cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9110:
    // 0x1a9110: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a9110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9114:
    // 0x1a9114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9118:
    // 0x1a9118: 0x3e00008  jr          $ra
label_1a911c:
    if (ctx->pc == 0x1A911Cu) {
        ctx->pc = 0x1A911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9118u;
        // 0x1a911c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9120u;
        goto label_fallthrough_0x1a9118;
    }
    ctx->pc = 0x1A9118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9118u;
        // 0x1a911c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9118:
    ctx->pc = 0x1A9120u;
}
