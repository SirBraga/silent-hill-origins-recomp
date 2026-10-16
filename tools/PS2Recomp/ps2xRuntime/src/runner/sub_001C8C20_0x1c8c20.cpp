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

// Function: sub_001C8C20
// Address: 0x1c8c20 - 0x1c8d38
void sub_001C8C20_0x1c8c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8C20_0x1c8c20");
#endif

    switch (ctx->pc) {
        case 0x1c8c54u: goto label_1c8c54;
        case 0x1c8c90u: goto label_1c8c90;
        case 0x1c8cb8u: goto label_1c8cb8;
        case 0x1c8cf0u: goto label_1c8cf0;
        default: break;
    }

    ctx->pc = 0x1c8c20u;

    // 0x1c8c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8c28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8c34: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1c8c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1c8c38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8c3c: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c8c40: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c8c44: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1c8c48: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1c8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1c8c4c: 0xc07234e  jal         func_1C8D38
    ctx->pc = 0x1C8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C54u);
    ctx->pc = 0x1C8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C4Cu;
    // 0x1c8c50: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8D38u, 0x1C8C4Cu, 0x1C8C54u)) {
        return;
    }
    ctx->pc = 0x1C8C54u;
label_1c8c54:
    // 0x1c8c54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c8c58: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x1c8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x1c8c5c: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x1c8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x1c8c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c64: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1c8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x1c8c68: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x1c8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x1c8c6c: 0x2448f9a0  addiu       $t0, $v0, -0x660
    ctx->pc = 0x1c8c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x1c8c70: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1c8c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c8c74: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1c8c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c8c78: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1c8c78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x69F9A8u));
    // 0x1c8c7c: 0xb20303a3  sdl         $v1, 0x3A3($s0)
    ctx->pc = 0x1c8c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c8c80: 0xb603039c  sdr         $v1, 0x39C($s0)
    ctx->pc = 0x1c8c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c8c84: 0xae0603a4  sw          $a2, 0x3A4($s0)
    ctx->pc = 0x1c8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 6));
    // 0x1c8c88: 0xc072828  jal         func_1CA0A0
    ctx->pc = 0x1C8C88u;
    SET_GPR_U32(ctx, 31, 0x1C8C90u);
    ctx->pc = 0x1C8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C88u;
    // 0x1c8c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA0A0u, 0x1C8C88u, 0x1C8C90u)) {
        return;
    }
    ctx->pc = 0x1C8C90u;
label_1c8c90:
    // 0x1c8c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8c94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c8c98: 0xae0203c8  sw          $v0, 0x3C8($s0)
    ctx->pc = 0x1c8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 2));
    // 0x1c8c9c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c8ca0: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x1c8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x1c8ca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8ca8: 0xe60003b8  swc1        $f0, 0x3B8($s0)
    ctx->pc = 0x1c8ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
    // 0x1c8cac: 0x260203d8  addiu       $v0, $s0, 0x3D8
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 984));
    // 0x1c8cb0: 0xe60003c0  swc1        $f0, 0x3C0($s0)
    ctx->pc = 0x1c8cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 960), bits); }
    // 0x1c8cb4: 0xe60003bc  swc1        $f0, 0x3BC($s0)
    ctx->pc = 0x1c8cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
label_1c8cb8:
    // 0x1c8cb8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1c8cbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c8cc0: 0x0  nop
    ctx->pc = 0x1c8cc0u;
    // NOP
    // 0x1c8cc4: 0x0  nop
    ctx->pc = 0x1c8cc4u;
    // NOP
    // 0x1c8cc8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8CC8u;
    {
        const bool branch_taken_0x1c8cc8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CC8u;
        // 0x1c8ccc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cc8) {
            ctx->pc = 0x1C8CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8cb8;
        }
    }
    ctx->pc = 0x1C8CD0u;
    // 0x1c8cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8cd4: 0x2609039c  addiu       $t1, $s0, 0x39C
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 924));
    // 0x1c8cd8: 0x260302d4  addiu       $v1, $s0, 0x2D4
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 724));
    // 0x1c8cdc: 0x260802d8  addiu       $t0, $s0, 0x2D8
    ctx->pc = 0x1c8cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x1c8ce0: 0x260702dc  addiu       $a3, $s0, 0x2DC
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 732));
    // 0x1c8ce4: 0x260602e0  addiu       $a2, $s0, 0x2E0
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1c8ce8: 0x260502e4  addiu       $a1, $s0, 0x2E4
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    // 0x1c8cec: 0x260402e8  addiu       $a0, $s0, 0x2E8
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
label_1c8cf0:
    // 0x1c8cf0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c8cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c8cf4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1c8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c8cf8: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1c8cfc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1c8cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1c8d00: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1c8d04: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1c8d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1c8d08: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x1c8d0c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1c8d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1c8d10: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x1c8d14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c8d18: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1c8d1c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1c8d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c8d20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8D20u;
    {
        const bool branch_taken_0x1c8d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D20u;
        // 0x1c8d24: 0x25080028  addiu       $t0, $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d20) {
            ctx->pc = 0x1C8CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8cf0;
        }
    }
    ctx->pc = 0x1C8D28u;
    // 0x1c8d28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D30u;
        // 0x1c8d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8D38u;
}
