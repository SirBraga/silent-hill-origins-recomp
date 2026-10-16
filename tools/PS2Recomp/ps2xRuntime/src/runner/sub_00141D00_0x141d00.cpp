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

// Function: sub_00141D00
// Address: 0x141d00 - 0x141e08
void sub_00141D00_0x141d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141D00_0x141d00");
#endif

    switch (ctx->pc) {
        case 0x141d18u: goto label_141d18;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d44u: goto label_141d44;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d8cu: goto label_141d8c;
        case 0x141da4u: goto label_141da4;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dd4u: goto label_141dd4;
        default: break;
    }

    ctx->pc = 0x141d00u;

    // 0x141d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141d04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x141d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x141d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141d10: 0xc050044  jal         func_140110
    ctx->pc = 0x141D10u;
    SET_GPR_U32(ctx, 31, 0x141D18u);
    ctx->pc = 0x141D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D10u;
    // 0x141d14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140110u, 0x141D10u, 0x141D18u)) {
        return;
    }
    ctx->pc = 0x141D18u;
label_141d18:
    // 0x141d18: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x141d1c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x141d20: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x141d24: 0x24630ab8  addiu       $v1, $v1, 0xAB8
    ctx->pc = 0x141d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2744));
    // 0x141d28: 0x24420ad8  addiu       $v0, $v0, 0xAD8
    ctx->pc = 0x141d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
    // 0x141d2c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x141d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x141d30: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x141d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x141d34: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x141D34u;
    SET_GPR_U32(ctx, 31, 0x141D3Cu);
    ctx->pc = 0x141D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D34u;
    // 0x141d38: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x141D34u, 0x141D3Cu)) {
        return;
    }
    ctx->pc = 0x141D3Cu;
label_141d3c:
    // 0x141d3c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x141D3Cu;
    SET_GPR_U32(ctx, 31, 0x141D44u);
    ctx->pc = 0x141D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D3Cu;
    // 0x141d40: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x141D3Cu, 0x141D44u)) {
        return;
    }
    ctx->pc = 0x141D44u;
label_141d44:
    // 0x141d44: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x141D44u;
    SET_GPR_U32(ctx, 31, 0x141D4Cu);
    ctx->pc = 0x141D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D44u;
    // 0x141d48: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x141D44u, 0x141D4Cu)) {
        return;
    }
    ctx->pc = 0x141D4Cu;
label_141d4c:
    // 0x141d4c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x141d50: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x141d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x141d54: 0x24630c70  addiu       $v1, $v1, 0xC70
    ctx->pc = 0x141d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3184));
    // 0x141d58: 0x24420c90  addiu       $v0, $v0, 0xC90
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3216));
    // 0x141d5c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x141d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x141d60: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x141d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x141d64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x141D64u;
    SET_GPR_U32(ctx, 31, 0x141D6Cu);
    ctx->pc = 0x141D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D64u;
    // 0x141d68: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x141D64u, 0x141D6Cu)) {
        return;
    }
    ctx->pc = 0x141D6Cu;
label_141d6c:
    // 0x141d6c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x141d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x141d70: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141d74: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x141d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x141d78: 0x24a546a0  addiu       $a1, $a1, 0x46A0
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18080));
    // 0x141d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d84: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x141D84u;
    SET_GPR_U32(ctx, 31, 0x141D8Cu);
    ctx->pc = 0x141D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D84u;
    // 0x141d88: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x141D84u, 0x141D8Cu)) {
        return;
    }
    ctx->pc = 0x141D8Cu;
label_141d8c:
    // 0x141d8c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x141d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x141d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d94: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x141d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x141d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d9c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x141D9Cu;
    SET_GPR_U32(ctx, 31, 0x141DA4u);
    ctx->pc = 0x141DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D9Cu;
    // 0x141da0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x141D9Cu, 0x141DA4u)) {
        return;
    }
    ctx->pc = 0x141DA4u;
label_141da4:
    // 0x141da4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dac: 0x24a54500  addiu       $a1, $a1, 0x4500
    ctx->pc = 0x141dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
    // 0x141db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141db4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x141DB4u;
    SET_GPR_U32(ctx, 31, 0x141DBCu);
    ctx->pc = 0x141DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DB4u;
    // 0x141db8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x141DB4u, 0x141DBCu)) {
        return;
    }
    ctx->pc = 0x141DBCu;
label_141dbc:
    // 0x141dbc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dc4: 0x24a54508  addiu       $a1, $a1, 0x4508
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17672));
    // 0x141dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dcc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x141DCCu;
    SET_GPR_U32(ctx, 31, 0x141DD4u);
    ctx->pc = 0x141DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DCCu;
    // 0x141dd0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x141DCCu, 0x141DD4u)) {
        return;
    }
    ctx->pc = 0x141DD4u;
label_141dd4:
    // 0x141dd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x141dd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x141dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x141ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141de0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141de4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x141de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x141de8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x141de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x141dec: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x141decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x141df0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x141df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x141DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DFCu;
        // 0x141e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E04u;
    // 0x141e04: 0x0  nop
    ctx->pc = 0x141e04u;
    // NOP
    ctx->pc = 0x141e08u;
}
