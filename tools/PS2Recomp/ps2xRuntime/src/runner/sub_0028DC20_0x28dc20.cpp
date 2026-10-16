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

// Function: sub_0028DC20
// Address: 0x28dc20 - 0x28def8
void sub_0028DC20_0x28dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DC20_0x28dc20");
#endif

    switch (ctx->pc) {
        case 0x28dc9cu: goto label_28dc9c;
        case 0x28dd60u: goto label_28dd60;
        case 0x28de24u: goto label_28de24;
        default: break;
    }

    ctx->pc = 0x28dc20u;

    // 0x28dc20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28dc24: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x28dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x28dc28: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x28dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x28dc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc30: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x28dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x28dc34: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28dc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc38: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x28dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x28dc3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28dc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc40: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x28dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x28dc44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28dc48: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x28dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x28dc4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28dc4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28dc54: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28dc54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28dc5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28dc60: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x28dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28dc64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dc68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28dc6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28dc70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28dc74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dc78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x28dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dc80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28dc80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28dc84: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28dc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28dc88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x28dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dc8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dc90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28dc90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28dc94: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x28DC94u;
    SET_GPR_U32(ctx, 31, 0x28DC9Cu);
    ctx->pc = 0x28DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC94u;
    // 0x28dc98: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x28DC94u, 0x28DC9Cu)) {
        return;
    }
    ctx->pc = 0x28DC9Cu;
label_28dc9c:
    // 0x28dc9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28dca0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x28dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28dca4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28dca8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28dcac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dcb0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x28dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dcb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dcb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28dcbc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dcc0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28dcc4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x28dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dcc8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28dcc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28dccc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28dcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28dcd0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28dcd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28dcd4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x28dcd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28dcd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dcdc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x28dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dce0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28dce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28dce4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x28dce4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28dce8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28dce8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28dcec: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x28dcecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28dcf0: 0x0  nop
    ctx->pc = 0x28dcf0u;
    // NOP
    // 0x28dcf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28DCF4u;
    {
        const bool branch_taken_0x28dcf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCF4u;
        // 0x28dcf8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcf4) {
            ctx->pc = 0x28DD04u;
            goto label_28dd04;
        }
    }
    ctx->pc = 0x28DCFCu;
    // 0x28dcfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DCFCu;
    {
        const bool branch_taken_0x28dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCFCu;
        // 0x28dd00: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcfc) {
            ctx->pc = 0x28DD18u;
            goto label_28dd18;
        }
    }
    ctx->pc = 0x28DD04u;
label_28dd04:
    // 0x28dd04: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x28dd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28dd08: 0x0  nop
    ctx->pc = 0x28dd08u;
    // NOP
    // 0x28dd0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DD0Cu;
    {
        const bool branch_taken_0x28dd0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD0Cu;
        // 0x28dd10: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd0c) {
            ctx->pc = 0x28DD18u;
            goto label_28dd18;
        }
    }
    ctx->pc = 0x28DD14u;
    // 0x28dd14: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dd18:
    // 0x28dd18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28dd1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28dd20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28dd24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28dd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28dd2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dd30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28dd34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28dd38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28dd3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dd40: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dd44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28dd44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28dd48: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28dd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28dd4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dd50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dd54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28dd54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28dd58: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x28DD58u;
    SET_GPR_U32(ctx, 31, 0x28DD60u);
    ctx->pc = 0x28DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD58u;
    // 0x28dd5c: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x28DD58u, 0x28DD60u)) {
        return;
    }
    ctx->pc = 0x28DD60u;
label_28dd60:
    // 0x28dd60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28dd64: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28dd68: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x28dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28dd6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28dd70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dd74: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dd78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dd7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28dd80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dd84: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28dd88: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x28dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28dd8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28dd8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28dd90: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28dd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28dd94: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x28dd94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28dd98: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x28dd98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28dd9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dda0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x28dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28dda4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28dda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28dda8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x28dda8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28ddac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28ddacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28ddb0: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x28ddb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ddb4: 0x0  nop
    ctx->pc = 0x28ddb4u;
    // NOP
    // 0x28ddb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28DDB8u;
    {
        const bool branch_taken_0x28ddb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDB8u;
        // 0x28ddbc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddb8) {
            ctx->pc = 0x28DDC8u;
            goto label_28ddc8;
        }
    }
    ctx->pc = 0x28DDC0u;
    // 0x28ddc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DDC0u;
    {
        const bool branch_taken_0x28ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDC0u;
        // 0x28ddc4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddc0) {
            ctx->pc = 0x28DDDCu;
            goto label_28dddc;
        }
    }
    ctx->pc = 0x28DDC8u;
label_28ddc8:
    // 0x28ddc8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x28ddc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ddcc: 0x0  nop
    ctx->pc = 0x28ddccu;
    // NOP
    // 0x28ddd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DDD0u;
    {
        const bool branch_taken_0x28ddd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDD0u;
        // 0x28ddd4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddd0) {
            ctx->pc = 0x28DDDCu;
            goto label_28dddc;
        }
    }
    ctx->pc = 0x28DDD8u;
    // 0x28ddd8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x28ddd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dddc:
    // 0x28dddc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28dde0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28dde4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28dde8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28dde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x28ddecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28ddf0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28ddf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28ddf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28ddfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28de00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de04: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28de08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28de08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28de0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28de10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28de18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28de18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28de1c: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x28DE1Cu;
    SET_GPR_U32(ctx, 31, 0x28DE24u);
    ctx->pc = 0x28DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE1Cu;
    // 0x28de20: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x28DE1Cu, 0x28DE24u)) {
        return;
    }
    ctx->pc = 0x28DE24u;
label_28de24:
    // 0x28de24: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28de28: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x28de28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28de2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x28de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28de30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28de30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28de34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28de34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28de38: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x28de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28de40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28de44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28de48: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x28de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28de4c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x28de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28de50: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28de50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28de54: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28de54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28de58: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x28de58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28de5c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x28de5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28de60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28de64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x28de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28de68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28de6c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x28de6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28de70: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28de70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28de74: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x28de74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28de78: 0x0  nop
    ctx->pc = 0x28de78u;
    // NOP
    // 0x28de7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28DE7Cu;
    {
        const bool branch_taken_0x28de7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE7Cu;
        // 0x28de80: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de7c) {
            ctx->pc = 0x28DE8Cu;
            goto label_28de8c;
        }
    }
    ctx->pc = 0x28DE84u;
    // 0x28de84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DE84u;
    {
        const bool branch_taken_0x28de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE84u;
        // 0x28de88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de84) {
            ctx->pc = 0x28DEA0u;
            goto label_28dea0;
        }
    }
    ctx->pc = 0x28DE8Cu;
label_28de8c:
    // 0x28de8c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x28de8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28de90: 0x0  nop
    ctx->pc = 0x28de90u;
    // NOP
    // 0x28de94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DE94u;
    {
        const bool branch_taken_0x28de94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE94u;
        // 0x28de98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de94) {
            ctx->pc = 0x28DEA0u;
            goto label_28dea0;
        }
    }
    ctx->pc = 0x28DE9Cu;
    // 0x28de9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dea0:
    // 0x28dea0: 0x2b11024  and         $v0, $s5, $s1
    ctx->pc = 0x28dea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 17));
    // 0x28dea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dea8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28deac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DEACu;
    {
        const bool branch_taken_0x28deac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEACu;
        // 0x28deb0: 0x2b11025  or          $v0, $s5, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28deac) {
            ctx->pc = 0x28DEBCu;
            goto label_28debc;
        }
    }
    ctx->pc = 0x28DEB4u;
    // 0x28deb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28DEB4u;
    {
        const bool branch_taken_0x28deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEB4u;
        // 0x28deb8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28deb4) {
            ctx->pc = 0x28DED0u;
            goto label_28ded0;
        }
    }
    ctx->pc = 0x28DEBCu;
label_28debc:
    // 0x28debc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28dec0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x28dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28dec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28dec8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x28decc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x28deccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_28ded0:
    // 0x28ded0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x28ded0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ded4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28ded4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ded8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x28ded8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28dedc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x28dedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28dee0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x28dee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28dee4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x28dee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28dee8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x28dee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28deec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28def0: 0x3e00008  jr          $ra
    ctx->pc = 0x28DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEF0u;
        // 0x28def4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DEF8u;
}
