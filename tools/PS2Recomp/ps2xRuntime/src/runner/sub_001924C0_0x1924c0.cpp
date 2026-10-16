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

// Function: sub_001924C0
// Address: 0x1924c0 - 0x1925e8
void sub_001924C0_0x1924c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001924C0_0x1924c0");
#endif

    switch (ctx->pc) {
        case 0x1924f4u: goto label_1924f4;
        case 0x192528u: goto label_192528;
        case 0x192538u: goto label_192538;
        case 0x192564u: goto label_192564;
        case 0x192580u: goto label_192580;
        case 0x192594u: goto label_192594;
        case 0x1925a4u: goto label_1925a4;
        case 0x1925b4u: goto label_1925b4;
        default: break;
    }

    ctx->pc = 0x1924c0u;

    // 0x1924c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1924c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1924c4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1924c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1924c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1924c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1924cc: 0x8c628b40  lw          $v0, -0x74C0($v1)
    ctx->pc = 0x1924ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338B40u));
    // 0x1924d0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1924d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924d4: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1924D4u;
    {
        const bool branch_taken_0x1924d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924D4u;
        // 0x1924d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924d4) {
            ctx->pc = 0x1925C8u;
            goto label_1925c8;
        }
    }
    ctx->pc = 0x1924DCu;
    // 0x1924dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1924dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1924e0: 0x8c438b3c  lw          $v1, -0x74C4($v0)
    ctx->pc = 0x1924e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338B3Cu));
    // 0x1924e4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1924E4u;
    {
        const bool branch_taken_0x1924e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924E4u;
        // 0x1924e8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924e4) {
            ctx->pc = 0x1925CCu;
            goto label_1925cc;
        }
    }
    ctx->pc = 0x1924ECu;
    // 0x1924ec: 0xc07cd8e  jal         func_1F3638
    ctx->pc = 0x1924ECu;
    SET_GPR_U32(ctx, 31, 0x1924F4u);
    ctx->pc = 0x1F3638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3638u, 0x1924ECu, 0x1924F4u)) {
        return;
    }
    ctx->pc = 0x1924F4u;
label_1924f4:
    // 0x1924f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1924F4u;
    {
        const bool branch_taken_0x1924f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924F4u;
        // 0x1924f8: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924f4) {
            ctx->pc = 0x192530u;
            goto label_192530;
        }
    }
    ctx->pc = 0x1924FCu;
    // 0x1924fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1924fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192500: 0x248496f0  addiu       $a0, $a0, -0x6910
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940400));
    // 0x192504: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x192508: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x192508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19250c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19250cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x192510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x192518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19251c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19251cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192520: 0xc06b5e0  jal         func_1AD780
    ctx->pc = 0x192520u;
    SET_GPR_U32(ctx, 31, 0x192528u);
    ctx->pc = 0x192524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192520u;
    // 0x192524: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD780u, 0x192520u, 0x192528u)) {
        return;
    }
    ctx->pc = 0x192528u;
label_192528:
    // 0x192528: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x192528u;
    {
        const bool branch_taken_0x192528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192528u;
        // 0x19252c: 0xae028b40  sw          $v0, -0x74C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294937408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192528) {
            ctx->pc = 0x192568u;
            goto label_192568;
        }
    }
    ctx->pc = 0x192530u;
label_192530:
    // 0x192530: 0xc07cd68  jal         func_1F35A0
    ctx->pc = 0x192530u;
    SET_GPR_U32(ctx, 31, 0x192538u);
    ctx->pc = 0x1F35A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35A0u, 0x192530u, 0x192538u)) {
        return;
    }
    ctx->pc = 0x192538u;
label_192538:
    // 0x192538: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x192538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19253c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19253cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x192540: 0x24a59708  addiu       $a1, $a1, -0x68F8
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940424));
    // 0x192544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192548: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x192548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19254c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19254cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x192554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192558: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x192558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19255c: 0xc06b6cc  jal         func_1ADB30
    ctx->pc = 0x19255Cu;
    SET_GPR_U32(ctx, 31, 0x192564u);
    ctx->pc = 0x192560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19255Cu;
    // 0x192560: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ADB30u, 0x19255Cu, 0x192564u)) {
        return;
    }
    ctx->pc = 0x192564u;
label_192564:
    // 0x192564: 0xae028b40  sw          $v0, -0x74C0($s0)
    ctx->pc = 0x192564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937408), GPR_U32(ctx, 2));
label_192568:
    // 0x192568: 0x8e048b40  lw          $a0, -0x74C0($s0)
    ctx->pc = 0x192568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937408)));
    // 0x19256c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19256Cu;
    {
        const bool branch_taken_0x19256c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19256Cu;
        // 0x192570: 0x3c050019  lui         $a1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19256c) {
            ctx->pc = 0x1925BCu;
            goto label_1925bc;
        }
    }
    ctx->pc = 0x192574u;
    // 0x192574: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x192574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x192578: 0xc06b8fa  jal         func_1AE3E8
    ctx->pc = 0x192578u;
    SET_GPR_U32(ctx, 31, 0x192580u);
    ctx->pc = 0x19257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192578u;
    // 0x19257c: 0x24a54410  addiu       $a1, $a1, 0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE3E8u, 0x192578u, 0x192580u)) {
        return;
    }
    ctx->pc = 0x192580u;
label_192580:
    // 0x192580: 0x8e028b48  lw          $v0, -0x74B8($s0)
    ctx->pc = 0x192580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937416)));
    // 0x192584: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192584u;
    {
        const bool branch_taken_0x192584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192584u;
        // 0x192588: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192584) {
            ctx->pc = 0x1925ACu;
            goto label_1925ac;
        }
    }
    ctx->pc = 0x19258Cu;
    // 0x19258c: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x19258Cu;
    SET_GPR_U32(ctx, 31, 0x192594u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x19258Cu, 0x192594u)) {
        return;
    }
    ctx->pc = 0x192594u;
label_192594:
    // 0x192594: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x192594u;
    {
        const bool branch_taken_0x192594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192594) {
            ctx->pc = 0x192598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192594u;
            // 0x192598: 0xae008b48  sw          $zero, -0x74B8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294937416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925C8u;
            goto label_1925c8;
        }
    }
    ctx->pc = 0x19259Cu;
    // 0x19259c: 0xc06039c  jal         func_180E70
    ctx->pc = 0x19259Cu;
    SET_GPR_U32(ctx, 31, 0x1925A4u);
    ctx->pc = 0x180E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180E70u, 0x19259Cu, 0x1925A4u)) {
        return;
    }
    ctx->pc = 0x1925A4u;
label_1925a4:
    // 0x1925a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1925A4u;
    {
        const bool branch_taken_0x1925a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925A4u;
        // 0x1925a8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925a4) {
            ctx->pc = 0x1925CCu;
            goto label_1925cc;
        }
    }
    ctx->pc = 0x1925ACu;
label_1925ac:
    // 0x1925ac: 0xc06c1ee  jal         func_1B07B8
    ctx->pc = 0x1925ACu;
    SET_GPR_U32(ctx, 31, 0x1925B4u);
    ctx->pc = 0x1925B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925ACu;
    // 0x1925b0: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B07B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B07B8u, 0x1925ACu, 0x1925B4u)) {
        return;
    }
    ctx->pc = 0x1925B4u;
label_1925b4:
    // 0x1925b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1925B4u;
    {
        const bool branch_taken_0x1925b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925B4u;
        // 0x1925b8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925b4) {
            ctx->pc = 0x1925CCu;
            goto label_1925cc;
        }
    }
    ctx->pc = 0x1925BCu;
label_1925bc:
    // 0x1925bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1925bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1925c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1925c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1925c4: 0xac628b44  sw          $v0, -0x74BC($v1)
    ctx->pc = 0x1925c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B44u, _value); } while (0);
label_1925c8:
    // 0x1925c8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1925c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1925cc:
    // 0x1925cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1925ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1925d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1925d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1925d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925d8: 0xac628b38  sw          $v0, -0x74C8($v1)
    ctx->pc = 0x1925d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937400), GPR_U32(ctx, 2));
    // 0x1925dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1925DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925DCu;
        // 0x1925e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1925E4u;
    // 0x1925e4: 0x0  nop
    ctx->pc = 0x1925e4u;
    // NOP
    ctx->pc = 0x1925e8u;
}
