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

// Function: sub_00314098
// Address: 0x314098 - 0x314118
void sub_00314098_0x314098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314098_0x314098");
#endif

    switch (ctx->pc) {
        case 0x3140d8u: goto label_3140d8;
        case 0x3140f8u: goto label_3140f8;
        default: break;
    }

    ctx->pc = 0x314098u;

    // 0x314098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31409c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3140a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3140a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3140a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3140a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3140a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3140ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3140acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3140b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3140b4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3140b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3140b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3140b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3140bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3140BCu;
    {
        const bool branch_taken_0x3140bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140BCu;
        // 0x3140c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140bc) {
            ctx->pc = 0x3140D8u;
            goto label_3140d8;
        }
    }
    ctx->pc = 0x3140C4u;
    // 0x3140c4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3140c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3140c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3140c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140cc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3140ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3140d0: 0xc0c7d86  jal         func_31F618
    ctx->pc = 0x3140D0u;
    SET_GPR_U32(ctx, 31, 0x3140D8u);
    ctx->pc = 0x3140D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140D0u;
    // 0x3140d4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F618u, 0x3140D0u, 0x3140D8u)) {
        return;
    }
    ctx->pc = 0x3140D8u;
label_3140d8:
    // 0x3140d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3140d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3140dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3140dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140e0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3140e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3140e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3140e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140e8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3140e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3140ec: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x3140ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x3140f0: 0xc0c7dce  jal         func_31F738
    ctx->pc = 0x3140F0u;
    SET_GPR_U32(ctx, 31, 0x3140F8u);
    ctx->pc = 0x3140F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140F0u;
    // 0x3140f4: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F738u, 0x3140F0u, 0x3140F8u)) {
        return;
    }
    ctx->pc = 0x3140F8u;
label_3140f8:
    // 0x3140f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3140f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3140fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3140fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x314100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x314104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314108: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x314108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31410c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314110: 0x3e00008  jr          $ra
    ctx->pc = 0x314110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314110u;
        // 0x314114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314118u;
}
