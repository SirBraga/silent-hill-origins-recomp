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

// Function: sub_001CC7A0
// Address: 0x1cc7a0 - 0x1cc850
void sub_001CC7A0_0x1cc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC7A0_0x1cc7a0");
#endif

    switch (ctx->pc) {
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc820u: goto label_1cc820;
        default: break;
    }

    ctx->pc = 0x1cc7a0u;

    // 0x1cc7a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cc7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cc7a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cc7a8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1cc7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1cc7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cc7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cc7b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc7b8: 0x26110274  addiu       $s1, $s0, 0x274
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1cc7bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1cc7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1cc7c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cc7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc7c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cc7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc7cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cc7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc7d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7d4: 0x0  nop
    ctx->pc = 0x1cc7d4u;
    // NOP
label_1cc7d8:
    // 0x1cc7d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cc7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC7E8u;
    {
        const bool branch_taken_0x1cc7e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E8u;
        // 0x1cc7ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7e8) {
            ctx->pc = 0x1CC7F8u;
            goto label_1cc7f8;
        }
    }
    ctx->pc = 0x1CC7F0u;
    // 0x1cc7f0: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC7F0u;
    SET_GPR_U32(ctx, 31, 0x1CC7F8u);
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC7F0u, 0x1CC7F8u)) {
        return;
    }
    ctx->pc = 0x1CC7F8u;
label_1cc7f8:
    // 0x1cc7f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1cc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1cc7fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1cc800: 0xae130294  sw          $s3, 0x294($s0)
    ctx->pc = 0x1cc800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 19));
    // 0x1cc804: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1cc808: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1cc808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1cc80c: 0xe614029c  swc1        $f20, 0x29C($s0)
    ctx->pc = 0x1cc80cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
    // 0x1cc810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC810u;
    {
        const bool branch_taken_0x1cc810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC810u;
        // 0x1cc814: 0xe6140298  swc1        $f20, 0x298($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc810) {
            ctx->pc = 0x1CC824u;
            goto label_1cc824;
        }
    }
    ctx->pc = 0x1CC818u;
    // 0x1cc818: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x1CC818u;
    SET_GPR_U32(ctx, 31, 0x1CC820u);
    ctx->pc = 0x1CC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC818u;
    // 0x1cc81c: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174FF0u, 0x1CC818u, 0x1CC820u)) {
        return;
    }
    ctx->pc = 0x1CC820u;
label_1cc820:
    // 0x1cc820: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cc820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_1cc824:
    // 0x1cc824: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1cc824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc828: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CC828u;
    {
        const bool branch_taken_0x1cc828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC828u;
        // 0x1cc82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc828) {
            ctx->pc = 0x1CC7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc7d8;
        }
    }
    ctx->pc = 0x1CC830u;
    // 0x1cc830: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cc830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc834: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cc834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc83c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1cc83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc844: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1cc844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc848: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC848u;
        // 0x1cc84c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC850u;
}
