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

// Function: sub_001F3BC8
// Address: 0x1f3bc8 - 0x1f3fa0
void sub_001F3BC8_0x1f3bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3BC8_0x1f3bc8");
#endif

    switch (ctx->pc) {
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3ed0u: goto label_1f3ed0;
        default: break;
    }

    ctx->pc = 0x1f3bc8u;

    // 0x1f3bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3bcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f3bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f3bd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f3bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f3bd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f3bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bd8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f3bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f3bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3be0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f3be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f3be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3be8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1f3bec: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1F3BECu;
    {
        const bool branch_taken_0x1f3bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BECu;
        // 0x1f3bf0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bec) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3BF4u;
    // 0x1f3bf4: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1f3bf8: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1f3bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f3bfc: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1F3BFCu;
    {
        const bool branch_taken_0x1f3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BFCu;
        // 0x1f3c00: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bfc) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3C04u;
    // 0x1f3c04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f3c08: 0x24422780  addiu       $v0, $v0, 0x2780
    ctx->pc = 0x1f3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10112));
    // 0x1f3c0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3c10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3c14: 0x800008  jr          $a0
    ctx->pc = 0x1F3C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3C1Cu: goto label_1f3c1c;
            case 0x1F3C44u: goto label_1f3c44;
            case 0x1F3C74u: goto label_1f3c74;
            case 0x1F3CA4u: goto label_1f3ca4;
            case 0x1F3D18u: goto label_1f3d18;
            case 0x1F3DA4u: goto label_1f3da4;
            case 0x1F3E38u: goto label_1f3e38;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3F64u: goto label_1f3f64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3C14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F3C1Cu;
label_1f3c1c:
    // 0x1f3c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3c20: 0x0  nop
    ctx->pc = 0x1f3c20u;
    // NOP
    // 0x1f3c24: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3c24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3c28: 0x0  nop
    ctx->pc = 0x1f3c28u;
    // NOP
    // 0x1f3c2c: 0x450100ce  bc1t        . + 4 + (0xCE << 2)
    ctx->pc = 0x1F3C2Cu;
    {
        const bool branch_taken_0x1f3c2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C2Cu;
        // 0x1f3c30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c2c) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3C34u;
    // 0x1f3c34: 0xc07d0e2  jal         func_1F4388
    ctx->pc = 0x1F3C34u;
    SET_GPR_U32(ctx, 31, 0x1F3C3Cu);
    ctx->pc = 0x1F3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C34u;
    // 0x1f3c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4388u, 0x1F3C34u, 0x1F3C3Cu)) {
        return;
    }
    ctx->pc = 0x1F3C3Cu;
label_1f3c3c:
    // 0x1f3c3c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1F3C3Cu;
    {
        const bool branch_taken_0x1f3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C3Cu;
        // 0x1f3c40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c3c) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3C44u;
label_1f3c44:
    // 0x1f3c44: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1f3c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3c4c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3c50: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1f3c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f3c54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f3c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f3c58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f3c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f3c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3c60: 0x0  nop
    ctx->pc = 0x1f3c60u;
    // NOP
    // 0x1f3c64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3c68: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1f3c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f3c6c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1F3C6Cu;
    {
        const bool branch_taken_0x1f3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C6Cu;
        // 0x1f3c70: 0xe6220018  swc1        $f2, 0x18($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c6c) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3C74u;
label_1f3c74:
    // 0x1f3c74: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1f3c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1f3c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3c7c: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x1f3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3c80: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1f3c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f3c84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f3c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f3c88: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f3c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f3c8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3c90: 0x0  nop
    ctx->pc = 0x1f3c90u;
    // NOP
    // 0x1f3c94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3c98: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1f3c98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f3c9c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F3C9Cu;
    {
        const bool branch_taken_0x1f3c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C9Cu;
        // 0x1f3ca0: 0xe622001c  swc1        $f2, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c9c) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3CA4u;
label_1f3ca4:
    // 0x1f3ca4: 0xc0763dc  jal         func_1D8F70
    ctx->pc = 0x1F3CA4u;
    SET_GPR_U32(ctx, 31, 0x1F3CACu);
    ctx->pc = 0x1F3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CA4u;
    // 0x1f3ca8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8F70u, 0x1F3CA4u, 0x1F3CACu)) {
        return;
    }
    ctx->pc = 0x1F3CACu;
label_1f3cac:
    // 0x1f3cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3cb0: 0x0  nop
    ctx->pc = 0x1f3cb0u;
    // NOP
    // 0x1f3cb4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3cb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3cb8: 0x0  nop
    ctx->pc = 0x1f3cb8u;
    // NOP
    // 0x1f3cbc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F3CBCu;
    {
        const bool branch_taken_0x1f3cbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CBCu;
        // 0x1f3cc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cbc) {
            ctx->pc = 0x1F3CF4u;
            goto label_1f3cf4;
        }
    }
    ctx->pc = 0x1F3CC4u;
    // 0x1f3cc4: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3cc8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f3cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3ccc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3cd0: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1f3cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f3cd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3cd8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3cdc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f3cdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3ce0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3CE0u;
    {
        const bool branch_taken_0x1f3ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ce0) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CE8u;
    // 0x1f3ce8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3cec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3CECu;
    {
        const bool branch_taken_0x1f3cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CECu;
        // 0x1f3cf0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cec) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CF4u;
label_1f3cf4:
    // 0x1f3cf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3cf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f3cfc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1f3d00:
    // 0x1f3d00: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
    ctx->pc = 0x1F3D00u;
    {
        const bool branch_taken_0x1f3d00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D00u;
        // 0x1f3d04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d00) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3D08u;
    // 0x1f3d08: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x1F3D08u;
    SET_GPR_U32(ctx, 31, 0x1F3D10u);
    ctx->pc = 0x1F3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D08u;
    // 0x1f3d0c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F38D8u, 0x1F3D08u, 0x1F3D10u)) {
        return;
    }
    ctx->pc = 0x1F3D10u;
label_1f3d10:
    // 0x1f3d10: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1F3D10u;
    {
        const bool branch_taken_0x1f3d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D10u;
        // 0x1f3d14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d10) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3D18u;
label_1f3d18:
    // 0x1f3d18: 0xc0763dc  jal         func_1D8F70
    ctx->pc = 0x1F3D18u;
    SET_GPR_U32(ctx, 31, 0x1F3D20u);
    ctx->pc = 0x1F3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D18u;
    // 0x1f3d1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8F70u, 0x1F3D18u, 0x1F3D20u)) {
        return;
    }
    ctx->pc = 0x1F3D20u;
label_1f3d20:
    // 0x1f3d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3d24: 0x0  nop
    ctx->pc = 0x1f3d24u;
    // NOP
    // 0x1f3d28: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3d28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3d2c: 0x0  nop
    ctx->pc = 0x1f3d2cu;
    // NOP
    // 0x1f3d30: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F3D30u;
    {
        const bool branch_taken_0x1f3d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D30u;
        // 0x1f3d34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d30) {
            ctx->pc = 0x1F3D68u;
            goto label_1f3d68;
        }
    }
    ctx->pc = 0x1F3D38u;
    // 0x1f3d38: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3d3c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3d40: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3d44: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f3d48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3d4c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3d50: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f3d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3d54: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3D54u;
    {
        const bool branch_taken_0x1f3d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d54) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D5Cu;
    // 0x1f3d5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3d60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3D60u;
    {
        const bool branch_taken_0x1f3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D60u;
        // 0x1f3d64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d60) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D68u;
label_1f3d68:
    // 0x1f3d68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3d6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f3d70: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1f3d74:
    // 0x1f3d74: 0x1240007c  beqz        $s2, . + 4 + (0x7C << 2)
    ctx->pc = 0x1F3D74u;
    {
        const bool branch_taken_0x1f3d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D74u;
        // 0x1f3d78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d74) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3D7Cu;
    // 0x1f3d7c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f3d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f3d80: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1f3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f3d84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3D84u;
    {
        const bool branch_taken_0x1f3d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d84) {
            ctx->pc = 0x1F3D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D84u;
            // 0x1f3d88: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3D9Cu;
            goto label_1f3d9c;
        }
    }
    ctx->pc = 0x1F3D8Cu;
    // 0x1f3d8c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1f3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f3d90: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x1F3D90u;
    {
        const bool branch_taken_0x1f3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d90) {
            ctx->pc = 0x1F3D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D90u;
            // 0x1f3d94: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3D98u;
    // 0x1f3d98: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1f3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_1f3d9c:
    // 0x1f3d9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F3D9Cu;
    {
        const bool branch_taken_0x1f3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D9Cu;
        // 0x1f3da0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d9c) {
            ctx->pc = 0x1F3E30u;
            goto label_1f3e30;
        }
    }
    ctx->pc = 0x1F3DA4u;
label_1f3da4:
    // 0x1f3da4: 0xc0763dc  jal         func_1D8F70
    ctx->pc = 0x1F3DA4u;
    SET_GPR_U32(ctx, 31, 0x1F3DACu);
    ctx->pc = 0x1F3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DA4u;
    // 0x1f3da8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8F70u, 0x1F3DA4u, 0x1F3DACu)) {
        return;
    }
    ctx->pc = 0x1F3DACu;
label_1f3dac:
    // 0x1f3dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3db0: 0x0  nop
    ctx->pc = 0x1f3db0u;
    // NOP
    // 0x1f3db4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3db4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3db8: 0x0  nop
    ctx->pc = 0x1f3db8u;
    // NOP
    // 0x1f3dbc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F3DBCu;
    {
        const bool branch_taken_0x1f3dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DBCu;
        // 0x1f3dc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dbc) {
            ctx->pc = 0x1F3DF4u;
            goto label_1f3df4;
        }
    }
    ctx->pc = 0x1F3DC4u;
    // 0x1f3dc4: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3dc8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3dcc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3dd0: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1f3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f3dd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3dd8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3ddc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f3ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3de0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3DE0u;
    {
        const bool branch_taken_0x1f3de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3de0) {
            ctx->pc = 0x1F3E00u;
            goto label_1f3e00;
        }
    }
    ctx->pc = 0x1F3DE8u;
    // 0x1f3de8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3DECu;
    {
        const bool branch_taken_0x1f3dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DECu;
        // 0x1f3df0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dec) {
            ctx->pc = 0x1F3E00u;
            goto label_1f3e00;
        }
    }
    ctx->pc = 0x1F3DF4u;
label_1f3df4:
    // 0x1f3df4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3df8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f3dfc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1f3e00:
    // 0x1f3e00: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F3E00u;
    {
        const bool branch_taken_0x1f3e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E00u;
        // 0x1f3e04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e00) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3E08u;
    // 0x1f3e08: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f3e0c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1f3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f3e10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3E10u;
    {
        const bool branch_taken_0x1f3e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E10u;
        // 0x1f3e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e10) {
            ctx->pc = 0x1F3E28u;
            goto label_1f3e28;
        }
    }
    ctx->pc = 0x1F3E18u;
    // 0x1f3e18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f3e1c: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F3E1Cu;
    {
        const bool branch_taken_0x1f3e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e1c) {
            ctx->pc = 0x1F3E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3E1Cu;
            // 0x1f3e20: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3E24u;
    // 0x1f3e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3e28:
    // 0x1f3e28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f3e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e2c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1f3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_1f3e30:
    // 0x1f3e30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1F3E30u;
    {
        const bool branch_taken_0x1f3e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E30u;
        // 0x1f3e34: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e30) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3E38u;
label_1f3e38:
    // 0x1f3e38: 0xc0763dc  jal         func_1D8F70
    ctx->pc = 0x1F3E38u;
    SET_GPR_U32(ctx, 31, 0x1F3E40u);
    ctx->pc = 0x1F3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E38u;
    // 0x1f3e3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8F70u, 0x1F3E38u, 0x1F3E40u)) {
        return;
    }
    ctx->pc = 0x1F3E40u;
label_1f3e40:
    // 0x1f3e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3e44: 0x0  nop
    ctx->pc = 0x1f3e44u;
    // NOP
    // 0x1f3e48: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3e48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3e4c: 0x0  nop
    ctx->pc = 0x1f3e4cu;
    // NOP
    // 0x1f3e50: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F3E50u;
    {
        const bool branch_taken_0x1f3e50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E50u;
        // 0x1f3e54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e50) {
            ctx->pc = 0x1F3E88u;
            goto label_1f3e88;
        }
    }
    ctx->pc = 0x1F3E58u;
    // 0x1f3e58: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3e5c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3e60: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3e64: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1f3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f3e68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3e6c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3e70: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f3e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3e74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3E74u;
    {
        const bool branch_taken_0x1f3e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e74) {
            ctx->pc = 0x1F3E94u;
            goto label_1f3e94;
        }
    }
    ctx->pc = 0x1F3E7Cu;
    // 0x1f3e7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3e80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3E80u;
    {
        const bool branch_taken_0x1f3e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E80u;
        // 0x1f3e84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e80) {
            ctx->pc = 0x1F3E94u;
            goto label_1f3e94;
        }
    }
    ctx->pc = 0x1F3E88u;
label_1f3e88:
    // 0x1f3e88: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3e8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f3e90: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1f3e94:
    // 0x1f3e94: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F3E94u;
    {
        const bool branch_taken_0x1f3e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E94u;
        // 0x1f3e98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e94) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3E9Cu;
    // 0x1f3e9c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1f3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f3ea0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1f3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f3ea4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3EA4u;
    {
        const bool branch_taken_0x1f3ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EA4u;
        // 0x1f3ea8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ea4) {
            ctx->pc = 0x1F3EBCu;
            goto label_1f3ebc;
        }
    }
    ctx->pc = 0x1F3EACu;
    // 0x1f3eac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1f3eb0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F3EB0u;
    {
        const bool branch_taken_0x1f3eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3eb0) {
            ctx->pc = 0x1F3EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3EB0u;
            // 0x1f3eb4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3EB8u;
    // 0x1f3eb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ebc:
    // 0x1f3ebc: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x1f3ebcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1f3ec0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F3EC0u;
    {
        const bool branch_taken_0x1f3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EC0u;
        // 0x1f3ec4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ec0) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3EC8u;
label_1f3ec8:
    // 0x1f3ec8: 0xc0763dc  jal         func_1D8F70
    ctx->pc = 0x1F3EC8u;
    SET_GPR_U32(ctx, 31, 0x1F3ED0u);
    ctx->pc = 0x1F3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EC8u;
    // 0x1f3ecc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8F70u, 0x1F3EC8u, 0x1F3ED0u)) {
        return;
    }
    ctx->pc = 0x1F3ED0u;
label_1f3ed0:
    // 0x1f3ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ed4: 0x0  nop
    ctx->pc = 0x1f3ed4u;
    // NOP
    // 0x1f3ed8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f3ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3edc: 0x0  nop
    ctx->pc = 0x1f3edcu;
    // NOP
    // 0x1f3ee0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F3EE0u;
    {
        const bool branch_taken_0x1f3ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EE0u;
        // 0x1f3ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ee0) {
            ctx->pc = 0x1F3F18u;
            goto label_1f3f18;
        }
    }
    ctx->pc = 0x1F3EE8u;
    // 0x1f3ee8: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1f3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1f3eec: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3ef0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3ef4: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f3ef8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3efc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f3f00: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f3f00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3f04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3F04u;
    {
        const bool branch_taken_0x1f3f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f04) {
            ctx->pc = 0x1F3F24u;
            goto label_1f3f24;
        }
    }
    ctx->pc = 0x1F3F0Cu;
    // 0x1f3f0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f3f10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3F10u;
    {
        const bool branch_taken_0x1f3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F10u;
        // 0x1f3f14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f10) {
            ctx->pc = 0x1F3F24u;
            goto label_1f3f24;
        }
    }
    ctx->pc = 0x1F3F18u;
label_1f3f18:
    // 0x1f3f18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f3f1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f3f20: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1f3f24:
    // 0x1f3f24: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3F24u;
    {
        const bool branch_taken_0x1f3f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F24u;
        // 0x1f3f28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f24) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3F2Cu;
    // 0x1f3f2c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f3f30: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1f3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1f3f34: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3F34u;
    {
        const bool branch_taken_0x1f3f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f34) {
            ctx->pc = 0x1F3F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F34u;
            // 0x1f3f38: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F48u;
            goto label_1f3f48;
        }
    }
    ctx->pc = 0x1F3F3Cu;
    // 0x1f3f3c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1f3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1f3f40: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F3F40u;
    {
        const bool branch_taken_0x1f3f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f40) {
            ctx->pc = 0x1F3F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F40u;
            // 0x1f3f44: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F48u;
            goto label_1f3f48;
        }
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3F48u;
    {
        const bool branch_taken_0x1f3f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f48) {
            ctx->pc = 0x1F3F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F48u;
            // 0x1f3f4c: 0x83180a  movz        $v1, $a0, $v1 (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F60u;
            goto label_1f3f60;
        }
    }
    ctx->pc = 0x1F3F50u;
    // 0x1f3f50: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1f3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1f3f54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F3F54u;
    {
        const bool branch_taken_0x1f3f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f54) {
            ctx->pc = 0x1F3F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F54u;
            // 0x1f3f58: 0x8c430024  lw          $v1, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F5Cu;
            goto label_1f3f5c;
        }
    }
    ctx->pc = 0x1F3F5Cu;
label_1f3f5c:
    // 0x1f3f5c: 0x83180a  movz        $v1, $a0, $v1
    ctx->pc = 0x1f3f5cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_1f3f60:
    // 0x1f3f60: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1f3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1f3f64:
    // 0x1f3f64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3f68:
    // 0x1f3f68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3f6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f3f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3f74: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f3f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F78u;
        // 0x1f3f7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3F80u;
    // 0x1f3f80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f3f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f3f84: 0x0  nop
    ctx->pc = 0x1f3f84u;
    // NOP
    // 0x1f3f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3f8c: 0x0  nop
    ctx->pc = 0x1f3f8cu;
    // NOP
    // 0x1f3f90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f3f94: 0x0  nop
    ctx->pc = 0x1f3f94u;
    // NOP
    // 0x1f3f98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3f9c: 0x0  nop
    ctx->pc = 0x1f3f9cu;
    // NOP
    ctx->pc = 0x1f3fa0u;
}
