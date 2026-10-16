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

// Function: sub_00114AB8
// Address: 0x114ab8 - 0x114b60
void sub_00114AB8_0x114ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114AB8_0x114ab8");
#endif

    switch (ctx->pc) {
        case 0x114adcu: goto label_114adc;
        case 0x114b00u: goto label_114b00;
        case 0x114b08u: goto label_114b08;
        case 0x114b14u: goto label_114b14;
        case 0x114b20u: goto label_114b20;
        default: break;
    }

    ctx->pc = 0x114ab8u;

    // 0x114ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114abc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114ac0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x114ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ac8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x114acc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x114accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x114ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114ad4: 0xc044624  jal         func_111890
    ctx->pc = 0x114AD4u;
    SET_GPR_U32(ctx, 31, 0x114ADCu);
    ctx->pc = 0x114AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD4u;
    // 0x114ad8: 0x261200d0  addiu       $s2, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x114AD4u, 0x114ADCu)) {
        return;
    }
    ctx->pc = 0x114ADCu;
label_114adc:
    // 0x114adc: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x114adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x114ae0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114ae4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x114ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x114ae8: 0x2463aba8  addiu       $v1, $v1, -0x5458
    ctx->pc = 0x114ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945704));
    // 0x114aec: 0x2442ab88  addiu       $v0, $v0, -0x5478
    ctx->pc = 0x114aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945672));
    // 0x114af0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x114af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x114af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114af8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x114AF8u;
    SET_GPR_U32(ctx, 31, 0x114B00u);
    ctx->pc = 0x114AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AF8u;
    // 0x114afc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x114AF8u, 0x114B00u)) {
        return;
    }
    ctx->pc = 0x114B00u;
label_114b00:
    // 0x114b00: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x114B00u;
    SET_GPR_U32(ctx, 31, 0x114B08u);
    ctx->pc = 0x114B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B00u;
    // 0x114b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x114B00u, 0x114B08u)) {
        return;
    }
    ctx->pc = 0x114B08u;
label_114b08:
    // 0x114b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b0c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x114B0Cu;
    SET_GPR_U32(ctx, 31, 0x114B14u);
    ctx->pc = 0x114B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B0Cu;
    // 0x114b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x114B0Cu, 0x114B14u)) {
        return;
    }
    ctx->pc = 0x114B14u;
label_114b14:
    // 0x114b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b18: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x114B18u;
    SET_GPR_U32(ctx, 31, 0x114B20u);
    ctx->pc = 0x114B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B18u;
    // 0x114b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x114B18u, 0x114B20u)) {
        return;
    }
    ctx->pc = 0x114B20u;
label_114b20:
    // 0x114b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114b2c: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x114b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x114b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x114b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b34: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x114b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x114b38: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x114b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x114b3c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x114b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x114b40: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x114b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x114b44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114b48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114b4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114b54: 0x3e00008  jr          $ra
    ctx->pc = 0x114B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B54u;
        // 0x114b58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114B5Cu;
    // 0x114b5c: 0x0  nop
    ctx->pc = 0x114b5cu;
    // NOP
    ctx->pc = 0x114b60u;
}
