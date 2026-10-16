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

// Function: sub_00148FD8
// Address: 0x148fd8 - 0x149118
void sub_00148FD8_0x148fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148FD8_0x148fd8");
#endif

    switch (ctx->pc) {
        case 0x149054u: goto label_149054;
        case 0x149060u: goto label_149060;
        case 0x149068u: goto label_149068;
        case 0x149074u: goto label_149074;
        case 0x14907cu: goto label_14907c;
        case 0x149088u: goto label_149088;
        case 0x149090u: goto label_149090;
        case 0x1490a0u: goto label_1490a0;
        case 0x1490acu: goto label_1490ac;
        case 0x1490b8u: goto label_1490b8;
        case 0x1490c4u: goto label_1490c4;
        case 0x1490d0u: goto label_1490d0;
        case 0x1490dcu: goto label_1490dc;
        case 0x1490e8u: goto label_1490e8;
        default: break;
    }

    ctx->pc = 0x148fd8u;

    // 0x148fd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x148fdc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x148fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x148fe0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x148fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x148fe4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x148fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x148fe8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x148fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x148fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ff0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x148ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x148ff4: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x148ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x148ff8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x148ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x148ffc: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x148ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x149000: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x149000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x149004: 0x24631660  addiu       $v1, $v1, 0x1660
    ctx->pc = 0x149004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5728));
    // 0x149008: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x149008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14900c: 0x24c61620  addiu       $a2, $a2, 0x1620
    ctx->pc = 0x14900cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5664));
    // 0x149010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149014: 0x24e717a0  addiu       $a3, $a3, 0x17A0
    ctx->pc = 0x149014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6048));
    // 0x149018: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x149018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x14901c: 0x261600e0  addiu       $s6, $s0, 0xE0
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x149020: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x149020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x149024: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x149024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14902c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x14902cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149030: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x149030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x149034: 0x26140100  addiu       $s4, $s0, 0x100
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x149038: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x149038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x14903c: 0x261500f8  addiu       $s5, $s0, 0xF8
    ctx->pc = 0x14903cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x149040: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x149040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
    // 0x149044: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x149048: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x149048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x14904c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14904Cu;
    SET_GPR_U32(ctx, 31, 0x149054u);
    ctx->pc = 0x149050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14904Cu;
    // 0x149050: 0x261300e8  addiu       $s3, $s0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14904Cu, 0x149054u)) {
        return;
    }
    ctx->pc = 0x149054u;
label_149054:
    // 0x149054: 0x261200f0  addiu       $s2, $s0, 0xF0
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x149058: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149058u;
    SET_GPR_U32(ctx, 31, 0x149060u);
    ctx->pc = 0x14905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149058u;
    // 0x14905c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149058u, 0x149060u)) {
        return;
    }
    ctx->pc = 0x149060u;
label_149060:
    // 0x149060: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149060u;
    SET_GPR_U32(ctx, 31, 0x149068u);
    ctx->pc = 0x149064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149060u;
    // 0x149064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149060u, 0x149068u)) {
        return;
    }
    ctx->pc = 0x149068u;
label_149068:
    // 0x149068: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x149068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14906c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14906Cu;
    SET_GPR_U32(ctx, 31, 0x149074u);
    ctx->pc = 0x149070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14906Cu;
    // 0x149070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14906Cu, 0x149074u)) {
        return;
    }
    ctx->pc = 0x149074u;
label_149074:
    // 0x149074: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149074u;
    SET_GPR_U32(ctx, 31, 0x14907Cu);
    ctx->pc = 0x149078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149074u;
    // 0x149078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149074u, 0x14907Cu)) {
        return;
    }
    ctx->pc = 0x14907Cu;
label_14907c:
    // 0x14907c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149080: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149080u;
    SET_GPR_U32(ctx, 31, 0x149088u);
    ctx->pc = 0x149084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149080u;
    // 0x149084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149080u, 0x149088u)) {
        return;
    }
    ctx->pc = 0x149088u;
label_149088:
    // 0x149088: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149088u;
    SET_GPR_U32(ctx, 31, 0x149090u);
    ctx->pc = 0x14908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149088u;
    // 0x14908c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149088u, 0x149090u)) {
        return;
    }
    ctx->pc = 0x149090u;
label_149090:
    // 0x149090: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x149090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x149094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149098: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149098u;
    SET_GPR_U32(ctx, 31, 0x1490A0u);
    ctx->pc = 0x14909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149098u;
    // 0x14909c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149098u, 0x1490A0u)) {
        return;
    }
    ctx->pc = 0x1490A0u;
label_1490a0:
    // 0x1490a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1490a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490a4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1490A4u;
    SET_GPR_U32(ctx, 31, 0x1490ACu);
    ctx->pc = 0x1490A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490A4u;
    // 0x1490a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1490A4u, 0x1490ACu)) {
        return;
    }
    ctx->pc = 0x1490ACu;
label_1490ac:
    // 0x1490ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1490acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490b0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1490B0u;
    SET_GPR_U32(ctx, 31, 0x1490B8u);
    ctx->pc = 0x1490B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490B0u;
    // 0x1490b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1490B0u, 0x1490B8u)) {
        return;
    }
    ctx->pc = 0x1490B8u;
label_1490b8:
    // 0x1490b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1490b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490bc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1490BCu;
    SET_GPR_U32(ctx, 31, 0x1490C4u);
    ctx->pc = 0x1490C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490BCu;
    // 0x1490c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1490BCu, 0x1490C4u)) {
        return;
    }
    ctx->pc = 0x1490C4u;
label_1490c4:
    // 0x1490c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1490c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1490C8u;
    SET_GPR_U32(ctx, 31, 0x1490D0u);
    ctx->pc = 0x1490CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490C8u;
    // 0x1490cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1490C8u, 0x1490D0u)) {
        return;
    }
    ctx->pc = 0x1490D0u;
label_1490d0:
    // 0x1490d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1490d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1490D4u;
    SET_GPR_U32(ctx, 31, 0x1490DCu);
    ctx->pc = 0x1490D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490D4u;
    // 0x1490d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1490D4u, 0x1490DCu)) {
        return;
    }
    ctx->pc = 0x1490DCu;
label_1490dc:
    // 0x1490dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1490dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e0: 0xc051e70  jal         func_1479C0
    ctx->pc = 0x1490E0u;
    SET_GPR_U32(ctx, 31, 0x1490E8u);
    ctx->pc = 0x1490E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490E0u;
    // 0x1490e4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1479C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1479C0u, 0x1490E0u, 0x1490E8u)) {
        return;
    }
    ctx->pc = 0x1490E8u;
label_1490e8:
    // 0x1490e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1490e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1490ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1490ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1490f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1490f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1490f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1490f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1490f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1490f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1490fc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1490fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149100: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x149100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149104: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x149104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14910c: 0x3e00008  jr          $ra
    ctx->pc = 0x14910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14910Cu;
        // 0x149110: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149114u;
    // 0x149114: 0x0  nop
    ctx->pc = 0x149114u;
    // NOP
    ctx->pc = 0x149118u;
}
