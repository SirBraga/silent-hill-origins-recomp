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

// Function: sub_00292DB0
// Address: 0x292db0 - 0x292e58
void sub_00292DB0_0x292db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292DB0_0x292db0");
#endif

    switch (ctx->pc) {
        case 0x292decu: goto label_292dec;
        case 0x292e10u: goto label_292e10;
        case 0x292e20u: goto label_292e20;
        case 0x292e30u: goto label_292e30;
        default: break;
    }

    ctx->pc = 0x292db0u;

    // 0x292db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292db4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292dbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x292dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dc8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x292dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x292dcc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x292dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x292dd0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x292dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x292dd4: 0x24a52e58  addiu       $a1, $a1, 0x2E58
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11864));
    // 0x292dd8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x292dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x292ddc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x292ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292de0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x292de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x292de4: 0xc09545a  jal         func_255168
    ctx->pc = 0x292DE4u;
    SET_GPR_U32(ctx, 31, 0x292DECu);
    ctx->pc = 0x292DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DE4u;
    // 0x292de8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x292DE4u, 0x292DECu)) {
        return;
    }
    ctx->pc = 0x292DECu;
label_292dec:
    // 0x292dec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x292decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x292df0: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x292DF0u;
    {
        const bool branch_taken_0x292df0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x292df0) {
            ctx->pc = 0x292DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292DF0u;
            // 0x292df4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E34u;
            goto label_292e34;
        }
    }
    ctx->pc = 0x292DF8u;
    // 0x292df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292dfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x292e00: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x292e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x292e04: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x292e04u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x292e08: 0xc0c239e  jal         func_308E78
    ctx->pc = 0x292E08u;
    SET_GPR_U32(ctx, 31, 0x292E10u);
    ctx->pc = 0x308E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308E78u, 0x292E08u, 0x292E10u)) {
        return;
    }
    ctx->pc = 0x292E10u;
label_292e10:
    // 0x292e10: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x292e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x292e14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292e18: 0xc0c239e  jal         func_308E78
    ctx->pc = 0x292E18u;
    SET_GPR_U32(ctx, 31, 0x292E20u);
    ctx->pc = 0x292E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E18u;
    // 0x292e1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308E78u, 0x292E18u, 0x292E20u)) {
        return;
    }
    ctx->pc = 0x292E20u;
label_292e20:
    // 0x292e20: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x292e20u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x292e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e28: 0xc08c580  jal         func_231600
    ctx->pc = 0x292E28u;
    SET_GPR_U32(ctx, 31, 0x292E30u);
    ctx->pc = 0x292E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E28u;
    // 0x292e2c: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x231600u, 0x292E28u, 0x292E30u)) {
        return;
    }
    ctx->pc = 0x292E30u;
label_292e30:
    // 0x292e30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x292e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_292e34:
    // 0x292e34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e40: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x292e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292e44: 0x3e00008  jr          $ra
    ctx->pc = 0x292E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E44u;
        // 0x292e48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292E4Cu;
    // 0x292e4c: 0x0  nop
    ctx->pc = 0x292e4cu;
    // NOP
    // 0x292e50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x292e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x292e54: 0x0  nop
    ctx->pc = 0x292e54u;
    // NOP
    ctx->pc = 0x292e58u;
}
