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

// Function: sub_00127030
// Address: 0x127030 - 0x1270e0
void sub_00127030_0x127030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127030_0x127030");
#endif

    switch (ctx->pc) {
        case 0x127030u: goto label_127030;
        case 0x127034u: goto label_127034;
        case 0x127038u: goto label_127038;
        case 0x12703cu: goto label_12703c;
        case 0x127040u: goto label_127040;
        case 0x127044u: goto label_127044;
        case 0x127048u: goto label_127048;
        case 0x12704cu: goto label_12704c;
        case 0x127050u: goto label_127050;
        case 0x127054u: goto label_127054;
        case 0x127058u: goto label_127058;
        case 0x12705cu: goto label_12705c;
        case 0x127060u: goto label_127060;
        case 0x127064u: goto label_127064;
        case 0x127068u: goto label_127068;
        case 0x12706cu: goto label_12706c;
        case 0x127070u: goto label_127070;
        case 0x127074u: goto label_127074;
        case 0x127078u: goto label_127078;
        case 0x12707cu: goto label_12707c;
        case 0x127080u: goto label_127080;
        case 0x127084u: goto label_127084;
        case 0x127088u: goto label_127088;
        case 0x12708cu: goto label_12708c;
        case 0x127090u: goto label_127090;
        case 0x127094u: goto label_127094;
        case 0x127098u: goto label_127098;
        case 0x12709cu: goto label_12709c;
        case 0x1270a0u: goto label_1270a0;
        case 0x1270a4u: goto label_1270a4;
        case 0x1270a8u: goto label_1270a8;
        case 0x1270acu: goto label_1270ac;
        case 0x1270b0u: goto label_1270b0;
        case 0x1270b4u: goto label_1270b4;
        case 0x1270b8u: goto label_1270b8;
        case 0x1270bcu: goto label_1270bc;
        case 0x1270c0u: goto label_1270c0;
        case 0x1270c4u: goto label_1270c4;
        case 0x1270c8u: goto label_1270c8;
        case 0x1270ccu: goto label_1270cc;
        case 0x1270d0u: goto label_1270d0;
        case 0x1270d4u: goto label_1270d4;
        case 0x1270d8u: goto label_1270d8;
        case 0x1270dcu: goto label_1270dc;
        default: break;
    }

    ctx->pc = 0x127030u;

label_127030:
    // 0x127030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_127034:
    // 0x127034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x127034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_127038:
    // 0x127038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12703c:
    // 0x12703c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12703cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127040:
    // 0x127040: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x127040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_127044:
    // 0x127044: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x127044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_127048:
    // 0x127048: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x127048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12704c:
    // 0x12704c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x12704cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_127050:
    // 0x127050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_127054:
    // 0x127054: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x127054u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_127058:
    // 0x127058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x127058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12705c:
    // 0x12705c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_127060:
    // 0x127060: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_127064:
    // 0x127064: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x127064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_127068:
    // 0x127068: 0x40f809  jalr        $v0
label_12706c:
    if (ctx->pc == 0x12706Cu) {
        ctx->pc = 0x12706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127068u;
        // 0x12706c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127070u;
        goto label_127070;
    }
    ctx->pc = 0x127068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127070u);
        ctx->pc = 0x12706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127068u;
        // 0x12706c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127068u, 0x127070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127070u;
label_127070:
    // 0x127070: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_127074:
    if (ctx->pc == 0x127074u) {
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127070u;
        // 0x127074: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127078u;
        goto label_127078;
    }
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127070) {
            ctx->pc = 0x127074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127070u;
            // 0x127074: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1270C8u;
            goto label_1270c8;
        }
    }
    ctx->pc = 0x127078u;
label_127078:
    // 0x127078: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x127078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_12707c:
    // 0x12707c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12707cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127080:
    // 0x127080: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x127080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_127084:
    // 0x127084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127088:
    // 0x127088: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x127088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12708c:
    // 0x12708c: 0xe6140ecc  swc1        $f20, 0xECC($s0)
    ctx->pc = 0x12708cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3788), bits); }
label_127090:
    // 0x127090: 0xe6010ec8  swc1        $f1, 0xEC8($s0)
    ctx->pc = 0x127090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3784), bits); }
label_127094:
    // 0x127094: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x127094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_127098:
    // 0x127098: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x127098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_12709c:
    // 0x12709c: 0x0  nop
    ctx->pc = 0x12709cu;
    // NOP
label_1270a0:
    // 0x1270a0: 0x0  nop
    ctx->pc = 0x1270a0u;
    // NOP
label_1270a4:
    // 0x1270a4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1270a4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
label_1270a8:
    // 0x1270a8: 0xe6000ed0  swc1        $f0, 0xED0($s0)
    ctx->pc = 0x1270a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3792), bits); }
label_1270ac:
    // 0x1270ac: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1270acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1270b0:
    // 0x1270b0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1270b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1270b4:
    // 0x1270b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1270b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1270b8:
    // 0x1270b8: 0xb2020ee7  sdl         $v0, 0xEE7($s0)
    ctx->pc = 0x1270b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3815); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1270bc:
    // 0x1270bc: 0xb6020ee0  sdr         $v0, 0xEE0($s0)
    ctx->pc = 0x1270bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1270c0:
    // 0x1270c0: 0xae030ee8  sw          $v1, 0xEE8($s0)
    ctx->pc = 0x1270c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3816), GPR_U32(ctx, 3));
label_1270c4:
    // 0x1270c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1270c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1270c8:
    // 0x1270c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1270c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1270cc:
    // 0x1270cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1270ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1270d0:
    // 0x1270d0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1270d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1270d4:
    // 0x1270d4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1270d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1270d8:
    // 0x1270d8: 0x3e00008  jr          $ra
label_1270dc:
    if (ctx->pc == 0x1270DCu) {
        ctx->pc = 0x1270DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270D8u;
        // 0x1270dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1270E0u;
        goto label_fallthrough_0x1270d8;
    }
    ctx->pc = 0x1270D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1270DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270D8u;
        // 0x1270dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1270D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1270d8:
    ctx->pc = 0x1270E0u;
}
