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

// Function: sub_0010F438
// Address: 0x10f438 - 0x10f518
void sub_0010F438_0x10f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F438_0x10f438");
#endif

    switch (ctx->pc) {
        case 0x10f458u: goto label_10f458;
        case 0x10f46cu: goto label_10f46c;
        case 0x10f488u: goto label_10f488;
        case 0x10f4b0u: goto label_10f4b0;
        case 0x10f4c0u: goto label_10f4c0;
        case 0x10f4d0u: goto label_10f4d0;
        case 0x10f4f0u: goto label_10f4f0;
        default: break;
    }

    ctx->pc = 0x10f438u;

    // 0x10f438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f43c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10f440: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10f444: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10f444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f44c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f450: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x10F450u;
    SET_GPR_U32(ctx, 31, 0x10F458u);
    ctx->pc = 0x10F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F450u;
    // 0x10f454: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x10F450u, 0x10F458u)) {
        return;
    }
    ctx->pc = 0x10F458u;
label_10f458:
    // 0x10f458: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10f45c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f460: 0x8c464378  lw          $a2, 0x4378($v0)
    ctx->pc = 0x10f460u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4378u));
    // 0x10f464: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x10F464u;
    SET_GPR_U32(ctx, 31, 0x10F46Cu);
    ctx->pc = 0x10F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F464u;
    // 0x10f468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x10F464u, 0x10F46Cu)) {
        return;
    }
    ctx->pc = 0x10F46Cu;
label_10f46c:
    // 0x10f46c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f470: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f474: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10F474u;
    {
        const bool branch_taken_0x10f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F474u;
        // 0x10f478: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f474) {
            ctx->pc = 0x10F500u;
            goto label_10f500;
        }
    }
    ctx->pc = 0x10F47Cu;
    // 0x10f47c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x10f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f480: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f484: 0x0  nop
    ctx->pc = 0x10f484u;
    // NOP
label_10f488:
    // 0x10f488: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10f48c: 0x5052000a  beql        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x10F48Cu;
    {
        const bool branch_taken_0x10f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x10f48c) {
            ctx->pc = 0x10F490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F48Cu;
            // 0x10f490: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F4B8u;
            goto label_10f4b8;
        }
    }
    ctx->pc = 0x10F494u;
    // 0x10f494: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x10F494u;
    {
        const bool branch_taken_0x10f494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f494) {
            ctx->pc = 0x10F498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F494u;
            // 0x10f498: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F4C8u;
            goto label_10f4c8;
        }
    }
    ctx->pc = 0x10F49Cu;
    // 0x10f49c: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F49Cu;
    {
        const bool branch_taken_0x10f49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F49Cu;
        // 0x10f4a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f49c) {
            ctx->pc = 0x10F4D8u;
            goto label_10f4d8;
        }
    }
    ctx->pc = 0x10F4A4u;
    // 0x10f4a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10f4a8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x10F4A8u;
    SET_GPR_U32(ctx, 31, 0x10F4B0u);
    ctx->pc = 0x10F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4A8u;
    // 0x10f4ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x10F4A8u, 0x10F4B0u)) {
        return;
    }
    ctx->pc = 0x10F4B0u;
label_10f4b0:
    // 0x10f4b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F4B0u;
    {
        const bool branch_taken_0x10f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B0u;
        // 0x10f4b4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4b0) {
            ctx->pc = 0x10F4D4u;
            goto label_10f4d4;
        }
    }
    ctx->pc = 0x10F4B8u;
label_10f4b8:
    // 0x10f4b8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x10F4B8u;
    SET_GPR_U32(ctx, 31, 0x10F4C0u);
    ctx->pc = 0x10F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4B8u;
    // 0x10f4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x10F4B8u, 0x10F4C0u)) {
        return;
    }
    ctx->pc = 0x10F4C0u;
label_10f4c0:
    // 0x10f4c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F4C0u;
    {
        const bool branch_taken_0x10f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4C0u;
        // 0x10f4c4: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4c0) {
            ctx->pc = 0x10F4D4u;
            goto label_10f4d4;
        }
    }
    ctx->pc = 0x10F4C8u;
label_10f4c8:
    // 0x10f4c8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x10F4C8u;
    SET_GPR_U32(ctx, 31, 0x10F4D0u);
    ctx->pc = 0x10F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4C8u;
    // 0x10f4cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x10F4C8u, 0x10F4D0u)) {
        return;
    }
    ctx->pc = 0x10F4D0u;
label_10f4d0:
    // 0x10f4d0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x10f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_10f4d4:
    // 0x10f4d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10f4d8:
    // 0x10f4d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f4e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f4e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f4e8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x10F4E8u;
    SET_GPR_U32(ctx, 31, 0x10F4F0u);
    ctx->pc = 0x10F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4E8u;
    // 0x10f4ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x10F4E8u, 0x10F4F0u)) {
        return;
    }
    ctx->pc = 0x10F4F0u;
label_10f4f0:
    // 0x10f4f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f4f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f4f8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x10F4F8u;
    {
        const bool branch_taken_0x10f4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4F8u;
        // 0x10f4fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4f8) {
            ctx->pc = 0x10F488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f488;
        }
    }
    ctx->pc = 0x10F500u;
label_10f500:
    // 0x10f500: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10f500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f504: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10f504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f510: 0x3e00008  jr          $ra
    ctx->pc = 0x10F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F518u;
}
