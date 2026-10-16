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

// Function: sub_001A8A80
// Address: 0x1a8a80 - 0x1a8b88
void sub_001A8A80_0x1a8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8A80_0x1a8a80");
#endif

    switch (ctx->pc) {
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8b64u: goto label_1a8b64;
        default: break;
    }

    ctx->pc = 0x1a8a80u;

    // 0x1a8a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8a84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a8a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a8a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8a90: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8a94: 0x8cc20200  lw          $v0, 0x200($a2)
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x1a8a98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8A98u;
    {
        const bool branch_taken_0x1a8a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A98u;
        // 0x1a8a9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a98) {
            ctx->pc = 0x1A8AC0u;
            goto label_1a8ac0;
        }
    }
    ctx->pc = 0x1A8AA0u;
    // 0x1a8aa0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1a8aa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8aa4: 0x0  nop
    ctx->pc = 0x1a8aa4u;
    // NOP
label_1a8aa8:
    // 0x1a8aa8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a8aac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a8ab0: 0x8cc20200  lw          $v0, 0x200($a2)
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x1a8ab4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a8ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8ab8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A8AB8u;
    {
        const bool branch_taken_0x1a8ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB8u;
        // 0x1a8abc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ab8) {
            ctx->pc = 0x1A8AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8aa8;
        }
    }
    ctx->pc = 0x1A8AC0u;
label_1a8ac0:
    // 0x1a8ac0: 0xacc00200  sw          $zero, 0x200($a2)
    ctx->pc = 0x1a8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 0));
    // 0x1a8ac4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1a8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8ac8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1a8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8acc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8ad0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a8ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a8ad4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1a8ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a8ad8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1a8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1a8adc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1a8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8ae0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a8ae0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a8ae4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a8ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a8ae8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1a8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8aec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a8aecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a8af0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1a8af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a8af4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1a8af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8af8: 0x0  nop
    ctx->pc = 0x1a8af8u;
    // NOP
    // 0x1a8afc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a8afcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1a8b00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8b00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a8b04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a8b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a8b08: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x1a8b08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a8b0c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a8b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a8b10: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1a8b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8b14: 0x0  nop
    ctx->pc = 0x1a8b14u;
    // NOP
    // 0x1a8b18: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a8b18u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x1a8b1c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8b1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a8b20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a8b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a8b24: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x1a8b24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a8b28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a8b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b2c: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a8b30: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x1a8b30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8b34: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8b38: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x1a8b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x1a8b3c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8B3Cu;
    {
        const bool branch_taken_0x1a8b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B3Cu;
        // 0x1a8b40: 0xa7a30022  sh          $v1, 0x22($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b3c) {
            ctx->pc = 0x1A8B64u;
            goto label_1a8b64;
        }
    }
    ctx->pc = 0x1A8B44u;
    // 0x1a8b44: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a8b48: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a8b4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a8b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a8b50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8B50u;
    {
        const bool branch_taken_0x1a8b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B50u;
        // 0x1a8b54: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b50) {
            ctx->pc = 0x1A8B64u;
            goto label_1a8b64;
        }
    }
    ctx->pc = 0x1A8B58u;
    // 0x1a8b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b5c: 0xc06a302  jal         func_1A8C08
    ctx->pc = 0x1A8B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B64u);
    ctx->pc = 0x1A8B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B5Cu;
    // 0x1a8b60: 0x97a50000  lhu         $a1, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8C08u, 0x1A8B5Cu, 0x1A8B64u)) {
        return;
    }
    ctx->pc = 0x1A8B64u;
label_1a8b64:
    // 0x1a8b64: 0x26030210  addiu       $v1, $s0, 0x210
    ctx->pc = 0x1a8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1a8b68: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x1a8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1a8b6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a8b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8b70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a8b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8b78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a8b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B7Cu;
        // 0x1a8b80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B84u;
    // 0x1a8b84: 0x0  nop
    ctx->pc = 0x1a8b84u;
    // NOP
    ctx->pc = 0x1a8b88u;
}
