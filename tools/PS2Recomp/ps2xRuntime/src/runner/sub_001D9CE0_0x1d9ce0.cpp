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

// Function: sub_001D9CE0
// Address: 0x1d9ce0 - 0x1d9db0
void sub_001D9CE0_0x1d9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9CE0_0x1d9ce0");
#endif

    switch (ctx->pc) {
        case 0x1d9d08u: goto label_1d9d08;
        case 0x1d9d18u: goto label_1d9d18;
        case 0x1d9d30u: goto label_1d9d30;
        case 0x1d9d60u: goto label_1d9d60;
        case 0x1d9d68u: goto label_1d9d68;
        case 0x1d9d94u: goto label_1d9d94;
        default: break;
    }

    ctx->pc = 0x1d9ce0u;

    // 0x1d9ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9ce4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1d9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d9ce8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d9cec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9cf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d9cf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d9cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d9cf8: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1d9cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1d9cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9d00: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D9D00u;
    SET_GPR_U32(ctx, 31, 0x1D9D08u);
    ctx->pc = 0x1D9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D00u;
    // 0x1d9d04: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D9D00u, 0x1D9D08u)) {
        return;
    }
    ctx->pc = 0x1D9D08u;
label_1d9d08:
    // 0x1d9d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d10: 0xc0802a6  jal         func_200A98
    ctx->pc = 0x1D9D10u;
    SET_GPR_U32(ctx, 31, 0x1D9D18u);
    ctx->pc = 0x1D9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D10u;
    // 0x1d9d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200A98u, 0x1D9D10u, 0x1D9D18u)) {
        return;
    }
    ctx->pc = 0x1D9D18u;
label_1d9d18:
    // 0x1d9d18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d9d1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d9d20: 0x24631ac8  addiu       $v1, $v1, 0x1AC8
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6856));
    // 0x1d9d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9d28: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D9D28u;
    SET_GPR_U32(ctx, 31, 0x1D9D30u);
    ctx->pc = 0x1D9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D28u;
    // 0x1d9d2c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D9D28u, 0x1D9D30u)) {
        return;
    }
    ctx->pc = 0x1D9D30u;
label_1d9d30:
    // 0x1d9d30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d9d34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d38: 0x24631b50  addiu       $v1, $v1, 0x1B50
    ctx->pc = 0x1d9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6992));
    // 0x1d9d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d40: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1d9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1d9d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d48: 0xae229e10  sw          $v0, -0x61F0($s1)
    ctx->pc = 0x1d9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942224), GPR_U32(ctx, 2));
    // 0x1d9d4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d9d50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9d54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d9d58: 0xc0802de  jal         func_200B78
    ctx->pc = 0x1D9D58u;
    SET_GPR_U32(ctx, 31, 0x1D9D60u);
    ctx->pc = 0x1D9D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D58u;
    // 0x1d9d5c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x1D9D58u, 0x1D9D60u)) {
        return;
    }
    ctx->pc = 0x1D9D60u;
label_1d9d60:
    // 0x1d9d60: 0xc080858  jal         func_202160
    ctx->pc = 0x1D9D60u;
    SET_GPR_U32(ctx, 31, 0x1D9D68u);
    ctx->pc = 0x1D9D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D60u;
    // 0x1d9d64: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1D9D60u, 0x1D9D68u)) {
        return;
    }
    ctx->pc = 0x1D9D68u;
label_1d9d68:
    // 0x1d9d68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d9d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d70: 0x24631af8  addiu       $v1, $v1, 0x1AF8
    ctx->pc = 0x1d9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6904));
    // 0x1d9d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d78: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1d9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1d9d7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d9d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d9d84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9d88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d9d8c: 0xc0802de  jal         func_200B78
    ctx->pc = 0x1D9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D94u);
    ctx->pc = 0x1D9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D8Cu;
    // 0x1d9d90: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200B78u, 0x1D9D8Cu, 0x1D9D94u)) {
        return;
    }
    ctx->pc = 0x1D9D94u;
label_1d9d94:
    // 0x1d9d94: 0xae508cb4  sw          $s0, -0x734C($s2)
    ctx->pc = 0x1d9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294937780), GPR_U32(ctx, 16));
    // 0x1d9d98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d9d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d9d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9da0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d9da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DA8u;
        // 0x1d9dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DB0u;
}
