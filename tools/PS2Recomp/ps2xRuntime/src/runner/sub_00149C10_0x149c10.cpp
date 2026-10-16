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

// Function: sub_00149C10
// Address: 0x149c10 - 0x149c98
void sub_00149C10_0x149c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149C10_0x149c10");
#endif

    switch (ctx->pc) {
        case 0x149c58u: goto label_149c58;
        case 0x149c68u: goto label_149c68;
        case 0x149c70u: goto label_149c70;
        case 0x149c7cu: goto label_149c7c;
        default: break;
    }

    ctx->pc = 0x149c10u;

    // 0x149c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149c14: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x149c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x149c18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x149c1c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x149c20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x149c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x149c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149c2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149c34: 0x24421960  addiu       $v0, $v0, 0x1960
    ctx->pc = 0x149c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6496));
    // 0x149c38: 0x24631980  addiu       $v1, $v1, 0x1980
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x149c3c: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x149c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x149c40: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149c44: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x149c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x149c48: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x149c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x149c4c: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x149c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x149c50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149C50u;
    SET_GPR_U32(ctx, 31, 0x149C58u);
    ctx->pc = 0x149C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C50u;
    // 0x149c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149C50u, 0x149C58u)) {
        return;
    }
    ctx->pc = 0x149C58u;
label_149c58:
    // 0x149c58: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c60: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149C60u;
    SET_GPR_U32(ctx, 31, 0x149C68u);
    ctx->pc = 0x149C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C60u;
    // 0x149c64: 0x24a5f8a0  addiu       $a1, $a1, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149C60u, 0x149C68u)) {
        return;
    }
    ctx->pc = 0x149C68u;
label_149c68:
    // 0x149c68: 0xc052628  jal         func_1498A0
    ctx->pc = 0x149C68u;
    SET_GPR_U32(ctx, 31, 0x149C70u);
    ctx->pc = 0x149C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C68u;
    // 0x149c6c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1498A0u, 0x149C68u, 0x149C70u)) {
        return;
    }
    ctx->pc = 0x149C70u;
label_149c70:
    // 0x149c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c74: 0xc0525d4  jal         func_149750
    ctx->pc = 0x149C74u;
    SET_GPR_U32(ctx, 31, 0x149C7Cu);
    ctx->pc = 0x149C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C74u;
    // 0x149c78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149750u, 0x149C74u, 0x149C7Cu)) {
        return;
    }
    ctx->pc = 0x149C7Cu;
label_149c7c:
    // 0x149c7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x149c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149c80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149c84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x149c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x149C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C8Cu;
        // 0x149c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C94u;
    // 0x149c94: 0x0  nop
    ctx->pc = 0x149c94u;
    // NOP
    ctx->pc = 0x149c98u;
}
