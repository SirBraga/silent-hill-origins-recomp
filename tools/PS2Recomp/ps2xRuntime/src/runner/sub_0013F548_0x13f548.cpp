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

// Function: sub_0013F548
// Address: 0x13f548 - 0x13f608
void sub_0013F548_0x13f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F548_0x13f548");
#endif

    switch (ctx->pc) {
        case 0x13f564u: goto label_13f564;
        case 0x13f58cu: goto label_13f58c;
        case 0x13f5ccu: goto label_13f5cc;
        case 0x13f5d8u: goto label_13f5d8;
        case 0x13f5e0u: goto label_13f5e0;
        default: break;
    }

    ctx->pc = 0x13f548u;

    // 0x13f548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f54c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13f550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f55c: 0xc040642  jal         func_101908
    ctx->pc = 0x13F55Cu;
    SET_GPR_U32(ctx, 31, 0x13F564u);
    ctx->pc = 0x13F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F55Cu;
    // 0x13f560: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101908u, 0x13F55Cu, 0x13F564u)) {
        return;
    }
    ctx->pc = 0x13F564u;
label_13f564:
    // 0x13f564: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f568: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13f568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f56c: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF880u));
    // 0x13f570: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F570u;
    {
        const bool branch_taken_0x13f570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F570u;
        // 0x13f574: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f570) {
            ctx->pc = 0x13F594u;
            goto label_13f594;
        }
    }
    ctx->pc = 0x13F578u;
    // 0x13f578: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x13f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x13f57c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13F57Cu;
    {
        const bool branch_taken_0x13f57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F57Cu;
        // 0x13f580: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f57c) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F584u;
    // 0x13f584: 0xc04fbaa  jal         func_13EEA8
    ctx->pc = 0x13F584u;
    SET_GPR_U32(ctx, 31, 0x13F58Cu);
    ctx->pc = 0x13F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F584u;
    // 0x13f588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EEA8u, 0x13F584u, 0x13F58Cu)) {
        return;
    }
    ctx->pc = 0x13F58Cu;
label_13f58c:
    // 0x13f58c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13F58Cu;
    {
        const bool branch_taken_0x13f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F58Cu;
        // 0x13f590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f58c) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F594u;
label_13f594:
    // 0x13f594: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
    // 0x13f598: 0x16030017  bne         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13F598u;
    {
        const bool branch_taken_0x13f598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F598u;
        // 0x13f59c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f598) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F5A0u;
    // 0x13f5a0: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x13f5a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F5A4u;
    {
        const bool branch_taken_0x13f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5A4u;
        // 0x13f5a8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5a4) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F5ACu;
    // 0x13f5ac: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f5b0: 0x8c508bc4  lw          $s0, -0x743C($v0)
    ctx->pc = 0x13f5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    // 0x13f5b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F5B4u;
    {
        const bool branch_taken_0x13f5b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B4u;
        // 0x13f5b8: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5b4) {
            ctx->pc = 0x13F5D8u;
            goto label_13f5d8;
        }
    }
    ctx->pc = 0x13F5BCu;
    // 0x13f5bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F5BCu;
    {
        const bool branch_taken_0x13f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5bc) {
            ctx->pc = 0x13F5D8u;
            goto label_13f5d8;
        }
    }
    ctx->pc = 0x13F5C4u;
    // 0x13f5c4: 0xc066512  jal         func_199448
    ctx->pc = 0x13F5C4u;
    SET_GPR_U32(ctx, 31, 0x13F5CCu);
    ctx->pc = 0x13F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5C4u;
    // 0x13f5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13F5C4u, 0x13F5CCu)) {
        return;
    }
    ctx->pc = 0x13F5CCu;
label_13f5cc:
    // 0x13f5cc: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f5d0: 0xc06640a  jal         func_199028
    ctx->pc = 0x13F5D0u;
    SET_GPR_U32(ctx, 31, 0x13F5D8u);
    ctx->pc = 0x13F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5D0u;
    // 0x13f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13F5D0u, 0x13F5D8u)) {
        return;
    }
    ctx->pc = 0x13F5D8u;
label_13f5d8:
    // 0x13f5d8: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x13F5D8u;
    SET_GPR_U32(ctx, 31, 0x13F5E0u);
    ctx->pc = 0x13F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5D8u;
    // 0x13f5dc: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x13F5D8u, 0x13F5E0u)) {
        return;
    }
    ctx->pc = 0x13F5E0u;
label_13f5e0:
    // 0x13f5e0: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x13f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
    // 0x13f5e4: 0xae200320  sw          $zero, 0x320($s1)
    ctx->pc = 0x13f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 0));
    // 0x13f5e8: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x13f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x13f5ec: 0xae200328  sw          $zero, 0x328($s1)
    ctx->pc = 0x13f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    // 0x13f5f0: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x13f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x13f5f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13f5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f5f8:
    // 0x13f5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f600: 0x3e00008  jr          $ra
    ctx->pc = 0x13F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F600u;
        // 0x13f604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F608u;
}
