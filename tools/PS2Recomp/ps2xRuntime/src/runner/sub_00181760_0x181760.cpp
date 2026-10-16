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

// Function: sub_00181760
// Address: 0x181760 - 0x181830
void sub_00181760_0x181760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181760_0x181760");
#endif

    ctx->pc = 0x181760u;

    // 0x181760: 0x8d0b0048  lw          $t3, 0x48($t0)
    ctx->pc = 0x181760u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x181764: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x181764u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181768: 0x8d0c004c  lw          $t4, 0x4C($t0)
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x18176c: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x18176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x181770: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181770u;
    {
        const bool branch_taken_0x181770 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x181770) {
            ctx->pc = 0x181774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181770u;
            // 0x181774: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181778u;
            goto label_181778;
        }
    }
    ctx->pc = 0x181778u;
label_181778:
    // 0x181778: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18177c: 0x12c4823  subu        $t1, $t1, $t4
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x181780: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x181784: 0x2d290400  sltiu       $t1, $t1, 0x400
    ctx->pc = 0x181784u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x181788: 0x4b001a  div         $zero, $v0, $t3
    ctx->pc = 0x181788u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18178c: 0x1810  mfhi        $v1
    ctx->pc = 0x18178cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x181790: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x181790u;
    {
        const bool branch_taken_0x181790 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x181794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181790u;
        // 0x181794: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181790) {
            ctx->pc = 0x1817B4u;
            goto label_1817b4;
        }
    }
    ctx->pc = 0x181798u;
    // 0x181798: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x181798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x18179c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x18179cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x1817a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1817a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1817a4: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x1817a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x1817a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1817a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1817ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1817ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817ACu;
        // 0x1817b0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1817ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1817B4u;
label_1817b4:
    // 0x1817b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1817b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1817b8: 0x254303ff  addiu       $v1, $t2, 0x3FF
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1023));
    // 0x1817bc: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x1817bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1817c0: 0x16c2023  subu        $a0, $t3, $t4
    ctx->pc = 0x1817c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1817c4: 0x142180b  movn        $v1, $t2, $v0
    ctx->pc = 0x1817c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10));
    // 0x1817c8: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1817cc: 0x35280  sll         $t2, $v1, 10
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1817d0: 0x8a202a  slt         $a0, $a0, $t2
    ctx->pc = 0x1817d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1817d4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1817D4u;
    {
        const bool branch_taken_0x1817d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0x8d020044  lw          $v0, 0x44($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d4) {
            ctx->pc = 0x1817F4u;
            goto label_1817f4;
        }
    }
    ctx->pc = 0x1817DCu;
    // 0x1817dc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1817e0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x1817e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x1817e4: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1817e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1817e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1817e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1817ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1817ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817ECu;
        // 0x1817f0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1817ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1817F4u;
label_1817f4:
    // 0x1817f4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1817f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1817f8: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x1817f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x1817fc: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x1817fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x181800: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x181800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x181804: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x181804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181808: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x181808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18180c: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x181810: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x181810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x181814: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x181818: 0x8d020048  lw          $v0, 0x48($t0)
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x18181c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181820: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x181824: 0x3e00008  jr          $ra
    ctx->pc = 0x181824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181824u;
        // 0x181828: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18182Cu;
    // 0x18182c: 0x0  nop
    ctx->pc = 0x18182cu;
    // NOP
    ctx->pc = 0x181830u;
}
