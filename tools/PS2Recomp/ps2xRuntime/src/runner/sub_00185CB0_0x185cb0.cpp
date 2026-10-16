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

// Function: sub_00185CB0
// Address: 0x185cb0 - 0x185e70
void sub_00185CB0_0x185cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185CB0_0x185cb0");
#endif

    switch (ctx->pc) {
        case 0x185d1cu: goto label_185d1c;
        case 0x185d38u: goto label_185d38;
        case 0x185d54u: goto label_185d54;
        case 0x185d70u: goto label_185d70;
        case 0x185d94u: goto label_185d94;
        case 0x185db0u: goto label_185db0;
        case 0x185dc4u: goto label_185dc4;
        case 0x185dd8u: goto label_185dd8;
        case 0x185decu: goto label_185dec;
        case 0x185e04u: goto label_185e04;
        case 0x185e1cu: goto label_185e1c;
        case 0x185e30u: goto label_185e30;
        case 0x185e44u: goto label_185e44;
        default: break;
    }

    ctx->pc = 0x185cb0u;

    // 0x185cb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x185cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x185cb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x185cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x185cb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x185cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x185cbc: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x185cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x185cc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x185cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x185cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x185cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x185ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185cd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x185cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x185cd4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x185cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x185cd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x185cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x185cdc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x185cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x185ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185ce4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x185ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x185ce8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x185ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x185cec: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x185cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x185cf0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x185cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x185cf4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x185cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x185cf8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x185cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x185cfc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x185cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x185d00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x185d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x185d04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x185d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x185d08: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x185d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x185d0c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x185d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x185d10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x185d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x185d14: 0xc06192a  jal         func_1864A8
    ctx->pc = 0x185D14u;
    SET_GPR_U32(ctx, 31, 0x185D1Cu);
    ctx->pc = 0x185D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D14u;
    // 0x185d18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1864A8u, 0x185D14u, 0x185D1Cu)) {
        return;
    }
    ctx->pc = 0x185D1Cu;
label_185d1c:
    // 0x185d1c: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x185d20: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x185d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x185d24: 0x2694bcc8  addiu       $s4, $s4, -0x4338
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950088));
    // 0x185d28: 0x24a58690  addiu       $a1, $a1, -0x7970
    ctx->pc = 0x185d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936208));
    // 0x185d2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x185d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d30: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x185D30u;
    SET_GPR_U32(ctx, 31, 0x185D38u);
    ctx->pc = 0x185D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D30u;
    // 0x185d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x185D30u, 0x185D38u)) {
        return;
    }
    ctx->pc = 0x185D38u;
label_185d38:
    // 0x185d38: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x185d3c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x185d40: 0x2673bcd0  addiu       $s3, $s3, -0x4330
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950096));
    // 0x185d44: 0x24a586a8  addiu       $a1, $a1, -0x7958
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936232));
    // 0x185d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d4c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x185D4Cu;
    SET_GPR_U32(ctx, 31, 0x185D54u);
    ctx->pc = 0x185D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D4Cu;
    // 0x185d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x185D4Cu, 0x185D54u)) {
        return;
    }
    ctx->pc = 0x185D54u;
label_185d54:
    // 0x185d54: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x185d54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x185d58: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x185d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x185d5c: 0x2631bcd8  addiu       $s1, $s1, -0x4328
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950104));
    // 0x185d60: 0x24a586c0  addiu       $a1, $a1, -0x7940
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
    // 0x185d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d68: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x185D68u;
    SET_GPR_U32(ctx, 31, 0x185D70u);
    ctx->pc = 0x185D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D68u;
    // 0x185d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x185D68u, 0x185D70u)) {
        return;
    }
    ctx->pc = 0x185D70u;
label_185d70:
    // 0x185d70: 0x3c16006d  lui         $s6, 0x6D
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
    // 0x185d74: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
    // 0x185d78: 0x265286e8  addiu       $s2, $s2, -0x7918
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936296));
    // 0x185d7c: 0x26d6bcf0  addiu       $s6, $s6, -0x4310
    ctx->pc = 0x185d7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950128));
    // 0x185d80: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x185d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x185d84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d88: 0x24a586d8  addiu       $a1, $a1, -0x7928
    ctx->pc = 0x185d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936280));
    // 0x185d8c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x185D8Cu;
    SET_GPR_U32(ctx, 31, 0x185D94u);
    ctx->pc = 0x185D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D8Cu;
    // 0x185d90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x185D8Cu, 0x185D94u)) {
        return;
    }
    ctx->pc = 0x185D94u;
label_185d94:
    // 0x185d94: 0x3c15006d  lui         $s5, 0x6D
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)109 << 16));
    // 0x185d98: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x185d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x185d9c: 0x26b5bcf8  addiu       $s5, $s5, -0x4308
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950136));
    // 0x185da0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185da4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185da8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x185DA8u;
    SET_GPR_U32(ctx, 31, 0x185DB0u);
    ctx->pc = 0x185DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DA8u;
    // 0x185dac: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x185DA8u, 0x185DB0u)) {
        return;
    }
    ctx->pc = 0x185DB0u;
label_185db0:
    // 0x185db0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x185db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dbc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185DBCu;
    SET_GPR_U32(ctx, 31, 0x185DC4u);
    ctx->pc = 0x185DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DBCu;
    // 0x185dc0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185DBCu, 0x185DC4u)) {
        return;
    }
    ctx->pc = 0x185DC4u;
label_185dc4:
    // 0x185dc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x185dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dd0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185DD0u;
    SET_GPR_U32(ctx, 31, 0x185DD8u);
    ctx->pc = 0x185DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DD0u;
    // 0x185dd4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185DD0u, 0x185DD8u)) {
        return;
    }
    ctx->pc = 0x185DD8u;
label_185dd8:
    // 0x185dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185de4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185DE4u;
    SET_GPR_U32(ctx, 31, 0x185DECu);
    ctx->pc = 0x185DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DE4u;
    // 0x185de8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185DE4u, 0x185DECu)) {
        return;
    }
    ctx->pc = 0x185DECu;
label_185dec:
    // 0x185dec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x185df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185df4: 0x24a586b8  addiu       $a1, $a1, -0x7948
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
    // 0x185df8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dfc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185DFCu;
    SET_GPR_U32(ctx, 31, 0x185E04u);
    ctx->pc = 0x185E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DFCu;
    // 0x185e00: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185DFCu, 0x185E04u)) {
        return;
    }
    ctx->pc = 0x185E04u;
label_185e04:
    // 0x185e04: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x185e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x185e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e0c: 0x24a586c0  addiu       $a1, $a1, -0x7940
    ctx->pc = 0x185e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
    // 0x185e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e14: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185E14u;
    SET_GPR_U32(ctx, 31, 0x185E1Cu);
    ctx->pc = 0x185E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E14u;
    // 0x185e18: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185E14u, 0x185E1Cu)) {
        return;
    }
    ctx->pc = 0x185E1Cu;
label_185e1c:
    // 0x185e1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x185e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e28: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185E28u;
    SET_GPR_U32(ctx, 31, 0x185E30u);
    ctx->pc = 0x185E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E28u;
    // 0x185e2c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185E28u, 0x185E30u)) {
        return;
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e3c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x185E3Cu;
    SET_GPR_U32(ctx, 31, 0x185E44u);
    ctx->pc = 0x185E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E3Cu;
    // 0x185e40: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x185E3Cu, 0x185E44u)) {
        return;
    }
    ctx->pc = 0x185E44u;
label_185e44:
    // 0x185e44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x185e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185e4c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x185e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185e50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x185e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185e54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185e58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x185e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185e5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x185e5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185e60: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x185e60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185e68: 0x3e00008  jr          $ra
    ctx->pc = 0x185E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E68u;
        // 0x185e6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185E70u;
}
