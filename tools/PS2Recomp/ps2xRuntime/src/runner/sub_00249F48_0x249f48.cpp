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

// Function: sub_00249F48
// Address: 0x249f48 - 0x249fc8
void sub_00249F48_0x249f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249F48_0x249f48");
#endif

    switch (ctx->pc) {
        case 0x249f74u: goto label_249f74;
        case 0x249fa0u: goto label_249fa0;
        default: break;
    }

    ctx->pc = 0x249f48u;

    // 0x249f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x249f4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x249f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x249f50: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x249f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x249f54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x249f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x249f58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249f64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f68: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x249f68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x249f6c: 0xc0926aa  jal         func_249AA8
    ctx->pc = 0x249F6Cu;
    SET_GPR_U32(ctx, 31, 0x249F74u);
    ctx->pc = 0x249F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F6Cu;
    // 0x249f70: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249AA8u, 0x249F6Cu, 0x249F74u)) {
        return;
    }
    ctx->pc = 0x249F74u;
label_249f74:
    // 0x249f74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249F74u;
    {
        const bool branch_taken_0x249f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F74u;
        // 0x249f78: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f74) {
            ctx->pc = 0x249FACu;
            goto label_249fac;
        }
    }
    ctx->pc = 0x249F7Cu;
    // 0x249f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249f84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249f88: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x249f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x249f8c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x249f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x249f90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x249f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x249f94: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x249f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x249f98: 0xc092698  jal         func_249A60
    ctx->pc = 0x249F98u;
    SET_GPR_U32(ctx, 31, 0x249FA0u);
    ctx->pc = 0x249F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F98u;
    // 0x249f9c: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A60u, 0x249F98u, 0x249FA0u)) {
        return;
    }
    ctx->pc = 0x249FA0u;
label_249fa0:
    // 0x249fa0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x249fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x249fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249FA4u;
    {
        const bool branch_taken_0x249fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA4u;
        // 0x249fa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa4) {
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249FACu;
label_249fac:
    // 0x249fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249fb0:
    // 0x249fb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x249fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x249fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x249FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FBCu;
        // 0x249fc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FC4u;
    // 0x249fc4: 0x0  nop
    ctx->pc = 0x249fc4u;
    // NOP
    ctx->pc = 0x249fc8u;
}
