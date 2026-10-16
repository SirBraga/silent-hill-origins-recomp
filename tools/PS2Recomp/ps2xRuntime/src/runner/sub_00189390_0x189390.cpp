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

// Function: sub_00189390
// Address: 0x189390 - 0x189400
void sub_00189390_0x189390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189390_0x189390");
#endif

    switch (ctx->pc) {
        case 0x1893b4u: goto label_1893b4;
        case 0x1893dcu: goto label_1893dc;
        default: break;
    }

    ctx->pc = 0x189390u;

    // 0x189390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189394: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x189394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x189398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x189398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18939c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18939cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1893a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1893a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1893a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1893a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1893ac: 0xc062540  jal         func_189500
    ctx->pc = 0x1893ACu;
    SET_GPR_U32(ctx, 31, 0x1893B4u);
    ctx->pc = 0x1893B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893ACu;
    // 0x1893b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189500u, 0x1893ACu, 0x1893B4u)) {
        return;
    }
    ctx->pc = 0x1893B4u;
label_1893b4:
    // 0x1893b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1893B4u;
    {
        const bool branch_taken_0x1893b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893B4u;
        // 0x1893b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893b4) {
            ctx->pc = 0x1893E4u;
            goto label_1893e4;
        }
    }
    ctx->pc = 0x1893BCu;
    // 0x1893bc: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x1893bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1893c0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1893C0u;
    {
        const bool branch_taken_0x1893c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C0u;
        // 0x1893c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893c0) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893C8u;
    // 0x1893c8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1893c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1893cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1893CCu;
    {
        const bool branch_taken_0x1893cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893CCu;
        // 0x1893d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893cc) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1893D4u;
    SET_GPR_U32(ctx, 31, 0x1893DCu);
    ctx->pc = 0x1893D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893D4u;
    // 0x1893d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1893D4u, 0x1893DCu)) {
        return;
    }
    ctx->pc = 0x1893DCu;
label_1893dc:
    // 0x1893dc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1893dcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1893e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1893e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1893e4:
    // 0x1893e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1893e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1893e8:
    // 0x1893e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1893e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1893ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1893ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1893f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1893f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1893F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893F4u;
        // 0x1893f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893FCu;
    // 0x1893fc: 0x0  nop
    ctx->pc = 0x1893fcu;
    // NOP
    ctx->pc = 0x189400u;
}
