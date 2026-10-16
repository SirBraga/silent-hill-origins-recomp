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

// Function: sub_00189E18
// Address: 0x189e18 - 0x189f30
void sub_00189E18_0x189e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189E18_0x189e18");
#endif

    switch (ctx->pc) {
        case 0x189e94u: goto label_189e94;
        case 0x189f00u: goto label_189f00;
        case 0x189f18u: goto label_189f18;
        default: break;
    }

    ctx->pc = 0x189e18u;

    // 0x189e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189e1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189e20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189e24: 0x24428e58  addiu       $v0, $v0, -0x71A8
    ctx->pc = 0x189e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938200));
    // 0x189e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x189e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x189e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x189e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189e3c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x189e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x189e40: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x189e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x189e44: 0x24638e90  addiu       $v1, $v1, -0x7170
    ctx->pc = 0x189e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938256));
    // 0x189e48: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x189e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x189e4c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x189e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x189e50: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x189e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x189e54: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x189e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x189e58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x189e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x189e5c: 0x24c68e78  addiu       $a2, $a2, -0x7188
    ctx->pc = 0x189e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938232));
    // 0x189e60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x189e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x189e64: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x189e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x189e68: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x189e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x189e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e70: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x189e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x189e74: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x189e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x189e78: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x189e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x189e7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x189e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x189e80: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x189e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x189e84: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x189e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x189e88: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x189e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x189e8c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x189E8Cu;
    SET_GPR_U32(ctx, 31, 0x189E94u);
    ctx->pc = 0x189E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E8Cu;
    // 0x189e90: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x189E8Cu, 0x189E94u)) {
        return;
    }
    ctx->pc = 0x189E94u;
label_189e94:
    // 0x189e94: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x189e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x189e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189e9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189ea0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x189ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ea8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x189ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x189eac: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x189eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x189eb0: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x189eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x189eb4: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x189eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x189eb8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x189eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x189ebc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x189ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x189ec0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x189ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x189ec4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x189ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x189ec8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x189ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x189ecc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x189eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x189ed0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x189ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x189ed4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x189ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x189ed8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x189ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x189edc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x189edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x189ee0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x189ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x189ee4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x189ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x189ee8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x189ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x189eec: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x189eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x189ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x189EF8u;
    SET_GPR_U32(ctx, 31, 0x189F00u);
    ctx->pc = 0x189EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EF8u;
    // 0x189efc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x189EF8u, 0x189F00u)) {
        return;
    }
    ctx->pc = 0x189F00u;
label_189f00:
    // 0x189f00: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x189f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x189f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f08: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x189f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    // 0x189f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x189F10u;
    SET_GPR_U32(ctx, 31, 0x189F18u);
    ctx->pc = 0x189F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F10u;
    // 0x189f14: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x189F10u, 0x189F18u)) {
        return;
    }
    ctx->pc = 0x189F18u;
label_189f18:
    // 0x189f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f24: 0x3e00008  jr          $ra
    ctx->pc = 0x189F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F24u;
        // 0x189f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F2Cu;
    // 0x189f2c: 0x0  nop
    ctx->pc = 0x189f2cu;
    // NOP
    ctx->pc = 0x189f30u;
}
