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

// Function: sub_001E4CC0
// Address: 0x1e4cc0 - 0x1e5000
void sub_001E4CC0_0x1e4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4CC0_0x1e4cc0");
#endif

    switch (ctx->pc) {
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f88u: goto label_1e4f88;
        default: break;
    }

    ctx->pc = 0x1e4cc0u;

    // 0x1e4cc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e4cc4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1e4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1e4cc8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e4ccc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4cd0: 0x24a2fe80  addiu       $v0, $a1, -0x180
    ctx->pc = 0x1e4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966912));
    // 0x1e4cd4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e4cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cdc: 0x2463fe87  addiu       $v1, $v1, -0x179
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966919));
    // 0x1e4ce0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1e4ce4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e4ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1e4ce8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1e4cec: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1e4cf0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e4cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1e4cf4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1e4cf8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1e4cfc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e4d00: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e4d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1e4d04: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1e4d08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e4d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e4d0c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D14u);
    ctx->pc = 0x1E4D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D0Cu;
    // 0x1e4d10: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4D0Cu, 0x1E4D14u)) {
        return;
    }
    ctx->pc = 0x1E4D14u;
label_1e4d14:
    // 0x1e4d14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4d1c: 0x24050b00  addiu       $a1, $zero, 0xB00
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x1e4d20: 0x24030a00  addiu       $v1, $zero, 0xA00
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x1e4d24: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e4d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e4d28: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1e4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1e4d2c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e4d30: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1e4d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1e4d34: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x1e4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1e4d38: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1e4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1e4d3c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1e4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1e4d40: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1e4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1e4d44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4d48: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d4c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e4d50: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1e4d50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1e4d54: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e4d58: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1e4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1e4d5c: 0x0  nop
    ctx->pc = 0x1e4d5cu;
    // NOP
label_1e4d60:
    // 0x1e4d60: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1e4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4d64: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e4d68: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1e4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1e4d6c: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x1e4d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e4d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4d74: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E4D74u;
    {
        const bool branch_taken_0x1e4d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D74u;
        // 0x1e4d78: 0x49180  sll         $s2, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d74) {
            ctx->pc = 0x1E4DA8u;
            goto label_1e4da8;
        }
    }
    ctx->pc = 0x1E4D7Cu;
    // 0x1e4d7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4d80: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1e4d84: 0x2462fe83  addiu       $v0, $v1, -0x17D
    ctx->pc = 0x1e4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966915));
    // 0x1e4d88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e4d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4d8c: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x1e4d8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1e4d90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e4d98: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1e4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1e4d9c: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1e4d9cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e4da0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1e4da4: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e4da8:
    // 0x1e4da8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4dac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4db0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1e4db4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e4db8: 0x2bc38  dsll        $s7, $v0, 16
    ctx->pc = 0x1e4db8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 16);
    // 0x1e4dbc: 0x24021410  addiu       $v0, $zero, 0x1410
    ctx->pc = 0x1e4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x1e4dc0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4DC0u;
    SET_GPR_U32(ctx, 31, 0x1E4DC8u);
    ctx->pc = 0x1E4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DC0u;
    // 0x1e4dc4: 0x2e22825  or          $a1, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4DC0u, 0x1E4DC8u)) {
        return;
    }
    ctx->pc = 0x1E4DC8u;
label_1e4dc8:
    // 0x1e4dc8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e4dcc: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1e4dd0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4dd4: 0x2b438  dsll        $s6, $v0, 16
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 16);
    // 0x1e4dd8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4DD8u;
    SET_GPR_U32(ctx, 31, 0x1E4DE0u);
    ctx->pc = 0x1E4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DD8u;
    // 0x1e4ddc: 0x2c32825  or          $a1, $s6, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4DD8u, 0x1E4DE0u)) {
        return;
    }
    ctx->pc = 0x1E4DE0u;
label_1e4de0:
    // 0x1e4de0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e4de4: 0x24051c10  addiu       $a1, $zero, 0x1C10
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7184));
    // 0x1e4de8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4dec: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x1e4decu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x1e4df0: 0x2a52825  or          $a1, $s5, $a1
    ctx->pc = 0x1e4df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    // 0x1e4df4: 0x24021810  addiu       $v0, $zero, 0x1810
    ctx->pc = 0x1e4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6160));
    // 0x1e4df8: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x1e4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x1e4dfc: 0x2a28825  or          $s1, $s5, $v0
    ctx->pc = 0x1e4dfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1e4e00: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E00u;
    SET_GPR_U32(ctx, 31, 0x1E4E08u);
    ctx->pc = 0x1E4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E00u;
    // 0x1e4e04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E00u, 0x1E4E08u)) {
        return;
    }
    ctx->pc = 0x1E4E08u;
label_1e4e08:
    // 0x1e4e08: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1e4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e4e0c: 0x24051a00  addiu       $a1, $zero, 0x1A00
    ctx->pc = 0x1e4e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
    // 0x1e4e10: 0x24031c00  addiu       $v1, $zero, 0x1C00
    ctx->pc = 0x1e4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1e4e14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4e18: 0x2a438  dsll        $s4, $v0, 16
    ctx->pc = 0x1e4e18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 16);
    // 0x1e4e1c: 0x2858025  or          $s0, $s4, $a1
    ctx->pc = 0x1e4e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x1e4e20: 0x283f025  or          $fp, $s4, $v1
    ctx->pc = 0x1e4e20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x1e4e24: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E24u;
    SET_GPR_U32(ctx, 31, 0x1E4E2Cu);
    ctx->pc = 0x1E4E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E24u;
    // 0x1e4e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E24u, 0x1E4E2Cu)) {
        return;
    }
    ctx->pc = 0x1E4E2Cu;
label_1e4e2c:
    // 0x1e4e2c: 0x24021810  addiu       $v0, $zero, 0x1810
    ctx->pc = 0x1e4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6160));
    // 0x1e4e30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4e34: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E34u;
    SET_GPR_U32(ctx, 31, 0x1E4E3Cu);
    ctx->pc = 0x1E4E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E34u;
    // 0x1e4e38: 0x2e22825  or          $a1, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E34u, 0x1E4E3Cu)) {
        return;
    }
    ctx->pc = 0x1E4E3Cu;
label_1e4e3c:
    // 0x1e4e3c: 0x24031a00  addiu       $v1, $zero, 0x1A00
    ctx->pc = 0x1e4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
    // 0x1e4e40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4e44: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E44u;
    SET_GPR_U32(ctx, 31, 0x1E4E4Cu);
    ctx->pc = 0x1E4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E44u;
    // 0x1e4e48: 0x2c32825  or          $a1, $s6, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E44u, 0x1E4E4Cu)) {
        return;
    }
    ctx->pc = 0x1E4E4Cu;
label_1e4e4c:
    // 0x1e4e4c: 0xdfa50018  ld          $a1, 0x18($sp)
    ctx->pc = 0x1e4e4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4e50: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E50u;
    SET_GPR_U32(ctx, 31, 0x1E4E58u);
    ctx->pc = 0x1E4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E50u;
    // 0x1e4e54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E50u, 0x1E4E58u)) {
        return;
    }
    ctx->pc = 0x1E4E58u;
label_1e4e58:
    // 0x1e4e58: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4e5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E64u);
    ctx->pc = 0x1E4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E5Cu;
    // 0x1e4e60: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E5Cu, 0x1E4E64u)) {
        return;
    }
    ctx->pc = 0x1E4E64u;
label_1e4e64:
    // 0x1e4e64: 0x24021410  addiu       $v0, $zero, 0x1410
    ctx->pc = 0x1e4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x1e4e68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4e6c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E74u);
    ctx->pc = 0x1E4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E6Cu;
    // 0x1e4e70: 0x2a22825  or          $a1, $s5, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E6Cu, 0x1E4E74u)) {
        return;
    }
    ctx->pc = 0x1E4E74u;
label_1e4e74:
    // 0x1e4e74: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x1e4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1e4e78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4e7c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E84u);
    ctx->pc = 0x1E4E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E7Cu;
    // 0x1e4e80: 0x2832825  or          $a1, $s4, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E7Cu, 0x1E4E84u)) {
        return;
    }
    ctx->pc = 0x1E4E84u;
label_1e4e84:
    // 0x1e4e84: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1e4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1e4e88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e4e90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e4e94: 0x29c38  dsll        $s3, $v0, 16
    ctx->pc = 0x1e4e94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 16);
    // 0x1e4e98: 0x24021810  addiu       $v0, $zero, 0x1810
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6160));
    // 0x1e4e9c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4EA4u);
    ctx->pc = 0x1E4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E9Cu;
    // 0x1e4ea0: 0x2622825  or          $a1, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4E9Cu, 0x1E4EA4u)) {
        return;
    }
    ctx->pc = 0x1E4EA4u;
label_1e4ea4:
    // 0x1e4ea4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4ea8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1e4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e4eac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1e4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4eb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e4eb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4eb8: 0x29438  dsll        $s2, $v0, 16
    ctx->pc = 0x1e4eb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 16);
    // 0x1e4ebc: 0x24021a00  addiu       $v0, $zero, 0x1A00
    ctx->pc = 0x1e4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
    // 0x1e4ec0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4EC0u;
    SET_GPR_U32(ctx, 31, 0x1E4EC8u);
    ctx->pc = 0x1E4EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EC0u;
    // 0x1e4ec4: 0x2422825  or          $a1, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4EC0u, 0x1E4EC8u)) {
        return;
    }
    ctx->pc = 0x1E4EC8u;
label_1e4ec8:
    // 0x1e4ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ecc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4ECCu;
    SET_GPR_U32(ctx, 31, 0x1E4ED4u);
    ctx->pc = 0x1E4ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4ECCu;
    // 0x1e4ed0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4ECCu, 0x1E4ED4u)) {
        return;
    }
    ctx->pc = 0x1E4ED4u;
label_1e4ed4:
    // 0x1e4ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ed8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4ED8u;
    SET_GPR_U32(ctx, 31, 0x1E4EE0u);
    ctx->pc = 0x1E4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4ED8u;
    // 0x1e4edc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4ED8u, 0x1E4EE0u)) {
        return;
    }
    ctx->pc = 0x1E4EE0u;
label_1e4ee0:
    // 0x1e4ee0: 0x24031c10  addiu       $v1, $zero, 0x1C10
    ctx->pc = 0x1e4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7184));
    // 0x1e4ee4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4ee8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4EE8u;
    SET_GPR_U32(ctx, 31, 0x1E4EF0u);
    ctx->pc = 0x1E4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE8u;
    // 0x1e4eec: 0x2632825  or          $a1, $s3, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4EE8u, 0x1E4EF0u)) {
        return;
    }
    ctx->pc = 0x1E4EF0u;
label_1e4ef0:
    // 0x1e4ef0: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1e4ef4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4ef8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4EF8u;
    SET_GPR_U32(ctx, 31, 0x1E4F00u);
    ctx->pc = 0x1E4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EF8u;
    // 0x1e4efc: 0x2422825  or          $a1, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4EF8u, 0x1E4F00u)) {
        return;
    }
    ctx->pc = 0x1E4F00u;
label_1e4f00:
    // 0x1e4f00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f04: 0x28620201  slti        $v0, $v1, 0x201
    ctx->pc = 0x1e4f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1e4f08: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E4F08u;
    {
        const bool branch_taken_0x1e4f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f08) {
            ctx->pc = 0x1E4F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4F08u;
            // 0x1e4f0c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4F8Cu;
            goto label_1e4f8c;
        }
    }
    ctx->pc = 0x1E4F10u;
    // 0x1e4f10: 0x24041c10  addiu       $a0, $zero, 0x1C10
    ctx->pc = 0x1e4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7184));
    // 0x1e4f14: 0x2e42825  or          $a1, $s7, $a0
    ctx->pc = 0x1e4f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
    // 0x1e4f18: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F18u;
    SET_GPR_U32(ctx, 31, 0x1E4F20u);
    ctx->pc = 0x1E4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F18u;
    // 0x1e4f1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F18u, 0x1E4F20u)) {
        return;
    }
    ctx->pc = 0x1E4F20u;
label_1e4f20:
    // 0x1e4f20: 0x24021c00  addiu       $v0, $zero, 0x1C00
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1e4f24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4f28: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F28u;
    SET_GPR_U32(ctx, 31, 0x1E4F30u);
    ctx->pc = 0x1E4F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F28u;
    // 0x1e4f2c: 0x2c22825  or          $a1, $s6, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F28u, 0x1E4F30u)) {
        return;
    }
    ctx->pc = 0x1E4F30u;
label_1e4f30:
    // 0x1e4f30: 0x24031e10  addiu       $v1, $zero, 0x1E10
    ctx->pc = 0x1e4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7696));
    // 0x1e4f34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4f38: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F38u;
    SET_GPR_U32(ctx, 31, 0x1E4F40u);
    ctx->pc = 0x1E4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F38u;
    // 0x1e4f3c: 0x2a32825  or          $a1, $s5, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F38u, 0x1E4F40u)) {
        return;
    }
    ctx->pc = 0x1E4F40u;
label_1e4f40:
    // 0x1e4f40: 0x24041d00  addiu       $a0, $zero, 0x1D00
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7424));
    // 0x1e4f44: 0x2842825  or          $a1, $s4, $a0
    ctx->pc = 0x1e4f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x1e4f48: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F48u;
    SET_GPR_U32(ctx, 31, 0x1E4F50u);
    ctx->pc = 0x1E4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F48u;
    // 0x1e4f4c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F48u, 0x1E4F50u)) {
        return;
    }
    ctx->pc = 0x1E4F50u;
label_1e4f50:
    // 0x1e4f50: 0xdfa50018  ld          $a1, 0x18($sp)
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4f54: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F54u;
    SET_GPR_U32(ctx, 31, 0x1E4F5Cu);
    ctx->pc = 0x1E4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F54u;
    // 0x1e4f58: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F54u, 0x1E4F5Cu)) {
        return;
    }
    ctx->pc = 0x1E4F5Cu;
label_1e4f5c:
    // 0x1e4f5c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e4f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f60: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F60u;
    SET_GPR_U32(ctx, 31, 0x1E4F68u);
    ctx->pc = 0x1E4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F60u;
    // 0x1e4f64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F60u, 0x1E4F68u)) {
        return;
    }
    ctx->pc = 0x1E4F68u;
label_1e4f68:
    // 0x1e4f68: 0x24021e10  addiu       $v0, $zero, 0x1E10
    ctx->pc = 0x1e4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7696));
    // 0x1e4f6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e4f70: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F70u;
    SET_GPR_U32(ctx, 31, 0x1E4F78u);
    ctx->pc = 0x1E4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F70u;
    // 0x1e4f74: 0x2622825  or          $a1, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F70u, 0x1E4F78u)) {
        return;
    }
    ctx->pc = 0x1E4F78u;
label_1e4f78:
    // 0x1e4f78: 0x24031d00  addiu       $v1, $zero, 0x1D00
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7424));
    // 0x1e4f7c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e4f80: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4F80u;
    SET_GPR_U32(ctx, 31, 0x1E4F88u);
    ctx->pc = 0x1E4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F80u;
    // 0x1e4f84: 0x2432825  or          $a1, $s2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4F80u, 0x1E4F88u)) {
        return;
    }
    ctx->pc = 0x1E4F88u;
label_1e4f88:
    // 0x1e4f88: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1e4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1e4f8c:
    // 0x1e4f8c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1e4f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e4f90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e4f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e4f98: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1e4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1e4f9c: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x1e4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x1e4fa0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e4fa4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1e4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1e4fa8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4fac: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1e4facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1e4fb0: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1e4fb4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4fb8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e4fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e4fbc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1e4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1e4fc0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1e4fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1e4fc4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1e4fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e4fc8: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x1E4FC8u;
    {
        const bool branch_taken_0x1e4fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FC8u;
        // 0x1e4fcc: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fc8) {
            ctx->pc = 0x1E4D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4d60;
        }
    }
    ctx->pc = 0x1E4FD0u;
    // 0x1e4fd0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e4fd4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e4fd8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e4fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4fdc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4fe0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e4fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4fe4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e4fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4fe8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e4fe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4fec: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e4fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4ff0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e4ff0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4ff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e4ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FF8u;
        // 0x1e4ffc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5000u;
}
