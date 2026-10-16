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

// Function: sub_002C4938
// Address: 0x2c4938 - 0x2c49b0
void sub_002C4938_0x2c4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4938_0x2c4938");
#endif

    ctx->pc = 0x2c4938u;

    // 0x2c4938: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2c4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c493c: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2c493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c4940: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c4944: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4948: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2c4948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c494c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c4950: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2c4950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c4954: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x2c4954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
    // 0x2c4958: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2c4958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2c495c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2c4960: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x2c4960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2c4964: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c4964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c4968: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c496c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c496cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4970: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2c4970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2c4974: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x2c4974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2c4978: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c497c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c497cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c4980: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2c4980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2c4984: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4988: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4988u;
        // 0x2c498c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4990u;
    // 0x2c4990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c4990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4994: 0x0  nop
    ctx->pc = 0x2c4994u;
    // NOP
    // 0x2c4998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c499c: 0x0  nop
    ctx->pc = 0x2c499cu;
    // NOP
    // 0x2c49a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c49a4: 0x0  nop
    ctx->pc = 0x2c49a4u;
    // NOP
    // 0x2c49a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c49ac: 0x0  nop
    ctx->pc = 0x2c49acu;
    // NOP
    ctx->pc = 0x2c49b0u;
}
