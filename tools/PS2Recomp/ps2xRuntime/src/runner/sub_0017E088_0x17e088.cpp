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

// Function: sub_0017E088
// Address: 0x17e088 - 0x17e220
void sub_0017E088_0x17e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E088_0x17e088");
#endif

    switch (ctx->pc) {
        case 0x17e0a8u: goto label_17e0a8;
        case 0x17e0c0u: goto label_17e0c0;
        case 0x17e114u: goto label_17e114;
        case 0x17e134u: goto label_17e134;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e16cu: goto label_17e16c;
        case 0x17e184u: goto label_17e184;
        case 0x17e1a4u: goto label_17e1a4;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e1dcu: goto label_17e1dc;
        case 0x17e1fcu: goto label_17e1fc;
        default: break;
    }

    ctx->pc = 0x17e088u;

    // 0x17e088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e08c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17e090: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17e094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e098: 0x8c46f994  lw          $a2, -0x66C($v0)
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF994u));
    // 0x17e09c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e0a0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17E0A0u;
    SET_GPR_U32(ctx, 31, 0x17E0A8u);
    ctx->pc = 0x17E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0A0u;
    // 0x17e0a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17E0A0u, 0x17E0A8u)) {
        return;
    }
    ctx->pc = 0x17E0A8u;
label_17e0a8:
    // 0x17e0a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e0b0: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x17E0B0u;
    {
        const bool branch_taken_0x17e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b0) {
            ctx->pc = 0x17E0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E0B0u;
            // 0x17e0b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E210u;
            goto label_17e210;
        }
    }
    ctx->pc = 0x17E0B8u;
    // 0x17e0b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e0c0:
    // 0x17e0c0: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x17e0c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17e0c4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x17E0C4u;
    {
        const bool branch_taken_0x17e0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0C4u;
        // 0x17e0c8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0c4) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E0CCu;
    // 0x17e0cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e0d0: 0x24427a00  addiu       $v0, $v0, 0x7A00
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31232));
    // 0x17e0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e0d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e0dc: 0x800008  jr          $a0
    ctx->pc = 0x17E0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E0E4u: goto label_17e0e4;
            case 0x17E0F4u: goto label_17e0f4;
            case 0x17E104u: goto label_17e104;
            case 0x17E13Cu: goto label_17e13c;
            case 0x17E174u: goto label_17e174;
            case 0x17E1ACu: goto label_17e1ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E0DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17E0E4u;
label_17e0e4:
    // 0x17e0e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e0ec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17E0ECu;
    {
        const bool branch_taken_0x17e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ECu;
        // 0x17e0f0: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ec) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E0F4u;
label_17e0f4:
    // 0x17e0f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e0fc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17E0FCu;
    {
        const bool branch_taken_0x17e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0FCu;
        // 0x17e100: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0fc) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E104u;
label_17e104:
    // 0x17e104: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e10c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17E10Cu;
    SET_GPR_U32(ctx, 31, 0x17E114u);
    ctx->pc = 0x17E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E10Cu;
    // 0x17e110: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17E10Cu, 0x17E114u)) {
        return;
    }
    ctx->pc = 0x17E114u;
label_17e114:
    // 0x17e114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e118: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E120u;
    // 0x17e120: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e124: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17E124u;
    {
        const bool branch_taken_0x17e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E124u;
        // 0x17e128: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e124) {
            ctx->pc = 0x17E1E4u;
            goto label_17e1e4;
        }
    }
    ctx->pc = 0x17E12Cu;
    // 0x17e12c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E12Cu;
    SET_GPR_U32(ctx, 31, 0x17E134u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E12Cu, 0x17E134u)) {
        return;
    }
    ctx->pc = 0x17E134u;
label_17e134:
    // 0x17e134: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17E134u;
    {
        const bool branch_taken_0x17e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E134u;
        // 0x17e138: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e134) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E13Cu;
label_17e13c:
    // 0x17e13c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e144: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17E144u;
    SET_GPR_U32(ctx, 31, 0x17E14Cu);
    ctx->pc = 0x17E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E144u;
    // 0x17e148: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17E144u, 0x17E14Cu)) {
        return;
    }
    ctx->pc = 0x17E14Cu;
label_17e14c:
    // 0x17e14c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17E150u;
    {
        const bool branch_taken_0x17e150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E150u;
        // 0x17e154: 0xae040040  sw          $a0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e150) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E158u;
    // 0x17e158: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e15c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17E15Cu;
    {
        const bool branch_taken_0x17e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E15Cu;
        // 0x17e160: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e15c) {
            ctx->pc = 0x17E1E4u;
            goto label_17e1e4;
        }
    }
    ctx->pc = 0x17E164u;
    // 0x17e164: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E164u;
    SET_GPR_U32(ctx, 31, 0x17E16Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E164u, 0x17E16Cu)) {
        return;
    }
    ctx->pc = 0x17E16Cu;
label_17e16c:
    // 0x17e16c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17E16Cu;
    {
        const bool branch_taken_0x17e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E16Cu;
        // 0x17e170: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e16c) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E174u;
label_17e174:
    // 0x17e174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e17c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17E17Cu;
    SET_GPR_U32(ctx, 31, 0x17E184u);
    ctx->pc = 0x17E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E17Cu;
    // 0x17e180: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17E17Cu, 0x17E184u)) {
        return;
    }
    ctx->pc = 0x17E184u;
label_17e184:
    // 0x17e184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e188: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17E188u;
    {
        const bool branch_taken_0x17e188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E188u;
        // 0x17e18c: 0xae040044  sw          $a0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e188) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E190u;
    // 0x17e190: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e194: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17E194u;
    {
        const bool branch_taken_0x17e194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E194u;
        // 0x17e198: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e194) {
            ctx->pc = 0x17E1E4u;
            goto label_17e1e4;
        }
    }
    ctx->pc = 0x17E19Cu;
    // 0x17e19c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E19Cu;
    SET_GPR_U32(ctx, 31, 0x17E1A4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E19Cu, 0x17E1A4u)) {
        return;
    }
    ctx->pc = 0x17E1A4u;
label_17e1a4:
    // 0x17e1a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17E1A4u;
    {
        const bool branch_taken_0x17e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1A4u;
        // 0x17e1a8: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1a4) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E1ACu;
label_17e1ac:
    // 0x17e1ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17E1B4u;
    SET_GPR_U32(ctx, 31, 0x17E1BCu);
    ctx->pc = 0x17E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B4u;
    // 0x17e1b8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17E1B4u, 0x17E1BCu)) {
        return;
    }
    ctx->pc = 0x17E1BCu;
label_17e1bc:
    // 0x17e1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E1C0u;
    {
        const bool branch_taken_0x17e1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1C0u;
        // 0x17e1c4: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1c0) {
            ctx->pc = 0x17E1E0u;
            goto label_17e1e0;
        }
    }
    ctx->pc = 0x17E1C8u;
    // 0x17e1c8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e1cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E1CCu;
    {
        const bool branch_taken_0x17e1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1CCu;
        // 0x17e1d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1cc) {
            ctx->pc = 0x17E1E4u;
            goto label_17e1e4;
        }
    }
    ctx->pc = 0x17E1D4u;
    // 0x17e1d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E1D4u;
    SET_GPR_U32(ctx, 31, 0x17E1DCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E1D4u, 0x17E1DCu)) {
        return;
    }
    ctx->pc = 0x17E1DCu;
label_17e1dc:
    // 0x17e1dc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x17e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_17e1e0:
    // 0x17e1e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17e1e4:
    // 0x17e1e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e1ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e1f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e1f4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17E1F4u;
    SET_GPR_U32(ctx, 31, 0x17E1FCu);
    ctx->pc = 0x17E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1F4u;
    // 0x17e1f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17E1F4u, 0x17E1FCu)) {
        return;
    }
    ctx->pc = 0x17E1FCu;
label_17e1fc:
    // 0x17e1fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e204: 0x5460ffae  bnel        $v1, $zero, . + 4 + (-0x52 << 2)
    ctx->pc = 0x17E204u;
    {
        const bool branch_taken_0x17e204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e204) {
            ctx->pc = 0x17E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E204u;
            // 0x17e208: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e0c0;
        }
    }
    ctx->pc = 0x17E20Cu;
    // 0x17e20c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17e20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e210:
    // 0x17e210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e214: 0x3e00008  jr          $ra
    ctx->pc = 0x17E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E214u;
        // 0x17e218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E21Cu;
    // 0x17e21c: 0x0  nop
    ctx->pc = 0x17e21cu;
    // NOP
    ctx->pc = 0x17e220u;
}
