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

// Function: sub_002485B8
// Address: 0x2485b8 - 0x2488f8
void sub_002485B8_0x2485b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002485B8_0x2485b8");
#endif

    switch (ctx->pc) {
        case 0x2486e0u: goto label_2486e0;
        case 0x2486ecu: goto label_2486ec;
        case 0x2488d4u: goto label_2488d4;
        case 0x2488e0u: goto label_2488e0;
        default: break;
    }

    ctx->pc = 0x2485b8u;

    // 0x2485b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2485b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2485bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2485bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485c0: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x2485C0u;
    {
        const bool branch_taken_0x2485c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485C0u;
        // 0x2485c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485c0) {
            ctx->pc = 0x2486F8u;
            goto label_2486f8;
        }
    }
    ctx->pc = 0x2485C8u;
    // 0x2485c8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2485c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2485cc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2485ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2485d0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2485D0u;
    {
        const bool branch_taken_0x2485d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D0u;
        // 0x2485d4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485d0) {
            ctx->pc = 0x2486D0u;
            goto label_2486d0;
        }
    }
    ctx->pc = 0x2485D8u;
    // 0x2485d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2485d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2485dc: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x2485dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
    // 0x2485e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2485e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2485e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2485e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2485e8: 0x800008  jr          $a0
    ctx->pc = 0x2485E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2485F0u: goto label_2485f0;
            case 0x248610u: goto label_248610;
            case 0x248630u: goto label_248630;
            case 0x248650u: goto label_248650;
            case 0x248670u: goto label_248670;
            case 0x248690u: goto label_248690;
            case 0x2486B0u: goto label_2486b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2485F0u;
label_2485f0:
    // 0x2485f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2485f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2485f4: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2485f8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2485fc: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248600: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x248600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248604: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248608: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x248608u;
    {
        const bool branch_taken_0x248608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248608u;
        // 0x24860c: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248608) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248610u;
label_248610:
    // 0x248610: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248614: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248614u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248618: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24861c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248620: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x248620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248624: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248628: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x248628u;
    {
        const bool branch_taken_0x248628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248628u;
        // 0x24862c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248628) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248630u;
label_248630:
    // 0x248630: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248634: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248638: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24863c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248640: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x248640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248644: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248648: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x248648u;
    {
        const bool branch_taken_0x248648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248648u;
        // 0x24864c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248648) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248650u;
label_248650:
    // 0x248650: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248654: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248654u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248658: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24865c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248660: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x248660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248664: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248668: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x248668u;
    {
        const bool branch_taken_0x248668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248668u;
        // 0x24866c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248668) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248670u;
label_248670:
    // 0x248670: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248674: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248674u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248678: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24867c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248680: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x248680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248684: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248688: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x248688u;
    {
        const bool branch_taken_0x248688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248688u;
        // 0x24868c: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248688) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248690u;
label_248690:
    // 0x248690: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248694: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248698: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24869c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x2486a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2486a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2486a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2486a8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2486A8u;
    {
        const bool branch_taken_0x2486a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486A8u;
        // 0x2486ac: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486a8) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2486B0u;
label_2486b0:
    // 0x2486b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2486b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2486b4: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x2486b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2486b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2486b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2486bc: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2486bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x2486c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2486c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2486c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2486c8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2486C8u;
    {
        const bool branch_taken_0x2486c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486C8u;
        // 0x2486cc: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486c8) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2486D0u;
label_2486d0:
    // 0x2486d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2486d4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2486d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2486d8: 0xc092848  jal         func_24A120
    ctx->pc = 0x2486D8u;
    SET_GPR_U32(ctx, 31, 0x2486E0u);
    ctx->pc = 0x2486DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486D8u;
    // 0x2486dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2486D8u, 0x2486E0u)) {
        return;
    }
    ctx->pc = 0x2486E0u;
label_2486e0:
    // 0x2486e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2486e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486e4: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2486E4u;
    SET_GPR_U32(ctx, 31, 0x2486ECu);
    ctx->pc = 0x2486E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486E4u;
    // 0x2486e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2486E4u, 0x2486ECu)) {
        return;
    }
    ctx->pc = 0x2486ECu;
label_2486ec:
    // 0x2486ec: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2486ECu;
    {
        const bool branch_taken_0x2486ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486ECu;
        // 0x2486f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486ec) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2486F4u;
    // 0x2486f4: 0x0  nop
    ctx->pc = 0x2486f4u;
    // NOP
label_2486f8:
    // 0x2486f8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2486f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2486fc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2486fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x248700: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x248700u;
    {
        const bool branch_taken_0x248700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248700u;
        // 0x248704: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248700) {
            ctx->pc = 0x2488C4u;
            goto label_2488c4;
        }
    }
    ctx->pc = 0x248708u;
    // 0x248708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24870c: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x24870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x248710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248718: 0x800008  jr          $a0
    ctx->pc = 0x248718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248720u: goto label_248720;
            case 0x24875Cu: goto label_24875c;
            case 0x248798u: goto label_248798;
            case 0x2487D4u: goto label_2487d4;
            case 0x248810u: goto label_248810;
            case 0x24884Cu: goto label_24884c;
            case 0x248888u: goto label_248888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248718u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248720u;
label_248720:
    // 0x248720: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248724: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248728: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248728u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24872c: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248730: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248734: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x248734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x248738: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248738u;
    {
        const bool branch_taken_0x248738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248738) {
            ctx->pc = 0x24873Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248738u;
            // 0x24873c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248744u;
            goto label_248744;
        }
    }
    ctx->pc = 0x248740u;
    // 0x248740: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x248740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_248744:
    // 0x248744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248748: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24874c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248754: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x248754u;
    {
        const bool branch_taken_0x248754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248754u;
        // 0x248758: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248754) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x24875Cu;
label_24875c:
    // 0x24875c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248760: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248764: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248764u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248768: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x248768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24876c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248770: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x248770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x248774: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248774u;
    {
        const bool branch_taken_0x248774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248774) {
            ctx->pc = 0x248778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248774u;
            // 0x248778: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248780u;
            goto label_248780;
        }
    }
    ctx->pc = 0x24877Cu;
    // 0x24877c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x24877cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_248780:
    // 0x248780: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248784: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248788: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24878c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248790: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x248790u;
    {
        const bool branch_taken_0x248790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248790u;
        // 0x248794: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248790) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248798u;
label_248798:
    // 0x248798: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24879c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2487a0: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x2487a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2487a4: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x2487a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2487a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2487a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2487ac: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2487b0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2487B0u;
    {
        const bool branch_taken_0x2487b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487b0) {
            ctx->pc = 0x2487B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2487B0u;
            // 0x2487b4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2487BCu;
            goto label_2487bc;
        }
    }
    ctx->pc = 0x2487B8u;
    // 0x2487b8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2487b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2487bc:
    // 0x2487bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2487bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2487c0: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2487c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2487c4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2487c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2487c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2487c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2487cc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2487CCu;
    {
        const bool branch_taken_0x2487cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487CCu;
        // 0x2487d0: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487cc) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2487D4u;
label_2487d4:
    // 0x2487d4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2487d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2487d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2487d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2487dc: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x2487dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2487e0: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x2487e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2487e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2487e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2487e8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2487e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2487ec: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2487ECu;
    {
        const bool branch_taken_0x2487ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487ec) {
            ctx->pc = 0x2487F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2487ECu;
            // 0x2487f0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2487F8u;
            goto label_2487f8;
        }
    }
    ctx->pc = 0x2487F4u;
    // 0x2487f4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2487f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_2487f8:
    // 0x2487f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2487f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2487fc: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2487fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248800: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248808: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x248808u;
    {
        const bool branch_taken_0x248808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248808u;
        // 0x24880c: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248808) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248810u;
label_248810:
    // 0x248810: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248814: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248818: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24881c: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x24881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248820: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248824: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x248824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x248828: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248828u;
    {
        const bool branch_taken_0x248828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248828) {
            ctx->pc = 0x24882Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248828u;
            // 0x24882c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248834u;
            goto label_248834;
        }
    }
    ctx->pc = 0x248830u;
    // 0x248830: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x248830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_248834:
    // 0x248834: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248838: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24883c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248840: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248844: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x248844u;
    {
        const bool branch_taken_0x248844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248844u;
        // 0x248848: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248844) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x24884Cu;
label_24884c:
    // 0x24884c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248850: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x248850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248854: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248854u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248858: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x248858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24885c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248860: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x248860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x248864: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248864u;
    {
        const bool branch_taken_0x248864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248864) {
            ctx->pc = 0x248868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248864u;
            // 0x248868: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248870u;
            goto label_248870;
        }
    }
    ctx->pc = 0x24886Cu;
    // 0x24886c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x24886cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_248870:
    // 0x248870: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248874: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248878: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24887c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248880: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x248880u;
    {
        const bool branch_taken_0x248880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248880u;
        // 0x248884: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248880) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x248888u;
label_248888:
    // 0x248888: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24888c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24888cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248890: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248890u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248894: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x248894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248898: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24889c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x24889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2488a0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2488A0u;
    {
        const bool branch_taken_0x2488a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2488a0) {
            ctx->pc = 0x2488A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2488A0u;
            // 0x2488a4: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2488ACu;
            goto label_2488ac;
        }
    }
    ctx->pc = 0x2488A8u;
    // 0x2488a8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2488a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2488ac:
    // 0x2488ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2488acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2488b0: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2488b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2488b4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2488b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2488b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2488b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2488bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2488BCu;
    {
        const bool branch_taken_0x2488bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488BCu;
        // 0x2488c0: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488bc) {
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2488C4u;
label_2488c4:
    // 0x2488c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2488c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2488c8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2488cc: 0xc092848  jal         func_24A120
    ctx->pc = 0x2488CCu;
    SET_GPR_U32(ctx, 31, 0x2488D4u);
    ctx->pc = 0x2488D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488CCu;
    // 0x2488d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2488CCu, 0x2488D4u)) {
        return;
    }
    ctx->pc = 0x2488D4u;
label_2488d4:
    // 0x2488d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2488d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488d8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2488D8u;
    SET_GPR_U32(ctx, 31, 0x2488E0u);
    ctx->pc = 0x2488DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488D8u;
    // 0x2488dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2488D8u, 0x2488E0u)) {
        return;
    }
    ctx->pc = 0x2488E0u;
label_2488e0:
    // 0x2488e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2488e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488e4: 0x0  nop
    ctx->pc = 0x2488e4u;
    // NOP
label_2488e8:
    // 0x2488e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2488e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2488ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2488ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488ECu;
        // 0x2488f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2488ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2488F4u;
    // 0x2488f4: 0x0  nop
    ctx->pc = 0x2488f4u;
    // NOP
    ctx->pc = 0x2488f8u;
}
