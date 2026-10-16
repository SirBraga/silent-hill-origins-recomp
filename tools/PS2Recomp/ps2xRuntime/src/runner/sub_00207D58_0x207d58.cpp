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

// Function: sub_00207D58
// Address: 0x207d58 - 0x207f80
void sub_00207D58_0x207d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207D58_0x207d58");
#endif

    switch (ctx->pc) {
        case 0x207d58u: goto label_207d58;
        case 0x207d5cu: goto label_207d5c;
        case 0x207d60u: goto label_207d60;
        case 0x207d64u: goto label_207d64;
        case 0x207d68u: goto label_207d68;
        case 0x207d6cu: goto label_207d6c;
        case 0x207d70u: goto label_207d70;
        case 0x207d74u: goto label_207d74;
        case 0x207d78u: goto label_207d78;
        case 0x207d7cu: goto label_207d7c;
        case 0x207d80u: goto label_207d80;
        case 0x207d84u: goto label_207d84;
        case 0x207d88u: goto label_207d88;
        case 0x207d8cu: goto label_207d8c;
        case 0x207d90u: goto label_207d90;
        case 0x207d94u: goto label_207d94;
        case 0x207d98u: goto label_207d98;
        case 0x207d9cu: goto label_207d9c;
        case 0x207da0u: goto label_207da0;
        case 0x207da4u: goto label_207da4;
        case 0x207da8u: goto label_207da8;
        case 0x207dacu: goto label_207dac;
        case 0x207db0u: goto label_207db0;
        case 0x207db4u: goto label_207db4;
        case 0x207db8u: goto label_207db8;
        case 0x207dbcu: goto label_207dbc;
        case 0x207dc0u: goto label_207dc0;
        case 0x207dc4u: goto label_207dc4;
        case 0x207dc8u: goto label_207dc8;
        case 0x207dccu: goto label_207dcc;
        case 0x207dd0u: goto label_207dd0;
        case 0x207dd4u: goto label_207dd4;
        case 0x207dd8u: goto label_207dd8;
        case 0x207ddcu: goto label_207ddc;
        case 0x207de0u: goto label_207de0;
        case 0x207de4u: goto label_207de4;
        case 0x207de8u: goto label_207de8;
        case 0x207decu: goto label_207dec;
        case 0x207df0u: goto label_207df0;
        case 0x207df4u: goto label_207df4;
        case 0x207df8u: goto label_207df8;
        case 0x207dfcu: goto label_207dfc;
        case 0x207e00u: goto label_207e00;
        case 0x207e04u: goto label_207e04;
        case 0x207e08u: goto label_207e08;
        case 0x207e0cu: goto label_207e0c;
        case 0x207e10u: goto label_207e10;
        case 0x207e14u: goto label_207e14;
        case 0x207e18u: goto label_207e18;
        case 0x207e1cu: goto label_207e1c;
        case 0x207e20u: goto label_207e20;
        case 0x207e24u: goto label_207e24;
        case 0x207e28u: goto label_207e28;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e30u: goto label_207e30;
        case 0x207e34u: goto label_207e34;
        case 0x207e38u: goto label_207e38;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e40u: goto label_207e40;
        case 0x207e44u: goto label_207e44;
        case 0x207e48u: goto label_207e48;
        case 0x207e4cu: goto label_207e4c;
        case 0x207e50u: goto label_207e50;
        case 0x207e54u: goto label_207e54;
        case 0x207e58u: goto label_207e58;
        case 0x207e5cu: goto label_207e5c;
        case 0x207e60u: goto label_207e60;
        case 0x207e64u: goto label_207e64;
        case 0x207e68u: goto label_207e68;
        case 0x207e6cu: goto label_207e6c;
        case 0x207e70u: goto label_207e70;
        case 0x207e74u: goto label_207e74;
        case 0x207e78u: goto label_207e78;
        case 0x207e7cu: goto label_207e7c;
        case 0x207e80u: goto label_207e80;
        case 0x207e84u: goto label_207e84;
        case 0x207e88u: goto label_207e88;
        case 0x207e8cu: goto label_207e8c;
        case 0x207e90u: goto label_207e90;
        case 0x207e94u: goto label_207e94;
        case 0x207e98u: goto label_207e98;
        case 0x207e9cu: goto label_207e9c;
        case 0x207ea0u: goto label_207ea0;
        case 0x207ea4u: goto label_207ea4;
        case 0x207ea8u: goto label_207ea8;
        case 0x207eacu: goto label_207eac;
        case 0x207eb0u: goto label_207eb0;
        case 0x207eb4u: goto label_207eb4;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ebcu: goto label_207ebc;
        case 0x207ec0u: goto label_207ec0;
        case 0x207ec4u: goto label_207ec4;
        case 0x207ec8u: goto label_207ec8;
        case 0x207eccu: goto label_207ecc;
        case 0x207ed0u: goto label_207ed0;
        case 0x207ed4u: goto label_207ed4;
        case 0x207ed8u: goto label_207ed8;
        case 0x207edcu: goto label_207edc;
        case 0x207ee0u: goto label_207ee0;
        case 0x207ee4u: goto label_207ee4;
        case 0x207ee8u: goto label_207ee8;
        case 0x207eecu: goto label_207eec;
        case 0x207ef0u: goto label_207ef0;
        case 0x207ef4u: goto label_207ef4;
        case 0x207ef8u: goto label_207ef8;
        case 0x207efcu: goto label_207efc;
        case 0x207f00u: goto label_207f00;
        case 0x207f04u: goto label_207f04;
        case 0x207f08u: goto label_207f08;
        case 0x207f0cu: goto label_207f0c;
        case 0x207f10u: goto label_207f10;
        case 0x207f14u: goto label_207f14;
        case 0x207f18u: goto label_207f18;
        case 0x207f1cu: goto label_207f1c;
        case 0x207f20u: goto label_207f20;
        case 0x207f24u: goto label_207f24;
        case 0x207f28u: goto label_207f28;
        case 0x207f2cu: goto label_207f2c;
        case 0x207f30u: goto label_207f30;
        case 0x207f34u: goto label_207f34;
        case 0x207f38u: goto label_207f38;
        case 0x207f3cu: goto label_207f3c;
        case 0x207f40u: goto label_207f40;
        case 0x207f44u: goto label_207f44;
        case 0x207f48u: goto label_207f48;
        case 0x207f4cu: goto label_207f4c;
        case 0x207f50u: goto label_207f50;
        case 0x207f54u: goto label_207f54;
        case 0x207f58u: goto label_207f58;
        case 0x207f5cu: goto label_207f5c;
        case 0x207f60u: goto label_207f60;
        case 0x207f64u: goto label_207f64;
        case 0x207f68u: goto label_207f68;
        case 0x207f6cu: goto label_207f6c;
        case 0x207f70u: goto label_207f70;
        case 0x207f74u: goto label_207f74;
        case 0x207f78u: goto label_207f78;
        case 0x207f7cu: goto label_207f7c;
        default: break;
    }

    ctx->pc = 0x207d58u;

label_207d58:
    // 0x207d58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x207d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_207d5c:
    // 0x207d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207d60:
    // 0x207d60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x207d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_207d64:
    // 0x207d64: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x207d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_207d68:
    // 0x207d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207d6c:
    // 0x207d6c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x207d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_207d70:
    // 0x207d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_207d74:
    // 0x207d74: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x207d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_207d78:
    // 0x207d78: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x207d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_207d7c:
    // 0x207d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207d80:
    // 0x207d80: 0x8e260148  lw          $a2, 0x148($s1)
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_207d84:
    // 0x207d84: 0x14c20017  bne         $a2, $v0, . + 4 + (0x17 << 2)
label_207d88:
    if (ctx->pc == 0x207D88u) {
        ctx->pc = 0x207D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D84u;
        // 0x207d88: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D8Cu;
        goto label_207d8c;
    }
    ctx->pc = 0x207D84u;
    {
        const bool branch_taken_0x207d84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x207D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D84u;
        // 0x207d88: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d84) {
            ctx->pc = 0x207DE4u;
            goto label_207de4;
        }
    }
    ctx->pc = 0x207D8Cu;
label_207d8c:
    // 0x207d8c: 0x8e27014c  lw          $a3, 0x14C($s1)
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_207d90:
    // 0x207d90: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_207d94:
    // 0x207d94: 0xae22015c  sw          $v0, 0x15C($s1)
    ctx->pc = 0x207d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
label_207d98:
    // 0x207d98: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x207d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_207d9c:
    // 0x207d9c: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x207d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
label_207da0:
    // 0x207da0: 0xace60034  sw          $a2, 0x34($a3)
    ctx->pc = 0x207da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 6));
label_207da4:
    // 0x207da4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_207da8:
    // 0x207da8: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_207dac:
    // 0x207dac: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x207dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_207db0:
    // 0x207db0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x207db0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_207db4:
    // 0x207db4: 0xace60038  sw          $a2, 0x38($a3)
    ctx->pc = 0x207db4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 6));
label_207db8:
    // 0x207db8: 0xace40040  sw          $a0, 0x40($a3)
    ctx->pc = 0x207db8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 4));
label_207dbc:
    // 0x207dbc: 0xace6003c  sw          $a2, 0x3C($a3)
    ctx->pc = 0x207dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 6));
label_207dc0:
    // 0x207dc0: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x207dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
label_207dc4:
    // 0x207dc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_207dc8:
    if (ctx->pc == 0x207DC8u) {
        ctx->pc = 0x207DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC4u;
        // 0x207dc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DCCu;
        goto label_207dcc;
    }
    ctx->pc = 0x207DC4u;
    {
        const bool branch_taken_0x207dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207dc4) {
            ctx->pc = 0x207DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207DC4u;
            // 0x207dc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207DCCu;
            goto label_207dcc;
        }
    }
    ctx->pc = 0x207DCCu;
label_207dcc:
    // 0x207dcc: 0x2810  mfhi        $a1
    ctx->pc = 0x207dccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_207dd0:
    // 0x207dd0: 0xa5180b  movn        $v1, $a1, $a1
    ctx->pc = 0x207dd0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
label_207dd4:
    // 0x207dd4: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x207dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
label_207dd8:
    // 0x207dd8: 0xae260164  sw          $a2, 0x164($s1)
    ctx->pc = 0x207dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 6));
label_207ddc:
    // 0x207ddc: 0x1000005e  b           . + 4 + (0x5E << 2)
label_207de0:
    if (ctx->pc == 0x207DE0u) {
        ctx->pc = 0x207DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DDCu;
        // 0x207de0: 0xae200168  sw          $zero, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DE4u;
        goto label_207de4;
    }
    ctx->pc = 0x207DDCu;
    {
        const bool branch_taken_0x207ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DDCu;
        // 0x207de0: 0xae200168  sw          $zero, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ddc) {
            ctx->pc = 0x207F58u;
            goto label_207f58;
        }
    }
    ctx->pc = 0x207DE4u;
label_207de4:
    // 0x207de4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x207de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_207de8:
    // 0x207de8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_207dec:
    if (ctx->pc == 0x207DECu) {
        ctx->pc = 0x207DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DE8u;
        // 0x207dec: 0x8e250134  lw          $a1, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DF0u;
        goto label_207df0;
    }
    ctx->pc = 0x207DE8u;
    {
        const bool branch_taken_0x207de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207de8) {
            ctx->pc = 0x207DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207DE8u;
            // 0x207dec: 0x8e250134  lw          $a1, 0x134($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207E28u;
            goto label_207e28;
        }
    }
    ctx->pc = 0x207DF0u;
label_207df0:
    // 0x207df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207df4:
    // 0x207df4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_207df8:
    // 0x207df8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207dfc:
    // 0x207dfc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x207dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_207e00:
    // 0x207e00: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_207e04:
    // 0x207e04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207e08:
    // 0x207e08: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x207e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_207e0c:
    // 0x207e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207e10:
    // 0x207e10: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x207e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
label_207e14:
    // 0x207e14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207e18:
    // 0x207e18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e1c:
    // 0x207e1c: 0x60f809  jalr        $v1
label_207e20:
    if (ctx->pc == 0x207E20u) {
        ctx->pc = 0x207E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E1Cu;
        // 0x207e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E24u;
        goto label_207e24;
    }
    ctx->pc = 0x207E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207E24u);
        ctx->pc = 0x207E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E1Cu;
        // 0x207e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E1Cu, 0x207E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207E24u;
label_207e24:
    // 0x207e24: 0x8e250134  lw          $a1, 0x134($s1)
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_207e28:
    // 0x207e28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x207e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207e2c:
    // 0x207e2c: 0x9e24001c  lwu         $a0, 0x1C($s1)
    ctx->pc = 0x207e2cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_207e30:
    // 0x207e30: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_207e34:
    // 0x207e34: 0xc084860  jal         func_212180
label_207e38:
    if (ctx->pc == 0x207E38u) {
        ctx->pc = 0x207E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E34u;
        // 0x207e38: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E3Cu;
        goto label_207e3c;
    }
    ctx->pc = 0x207E34u;
    SET_GPR_U32(ctx, 31, 0x207E3Cu);
    ctx->pc = 0x207E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E34u;
    // 0x207e38: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207E34u, 0x207E3Cu)) {
        return;
    }
    ctx->pc = 0x207E3Cu;
label_207e3c:
    // 0x207e3c: 0x8e250138  lw          $a1, 0x138($s1)
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_207e40:
    // 0x207e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207e44:
    // 0x207e44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207e48:
    // 0x207e48: 0x9e240020  lwu         $a0, 0x20($s1)
    ctx->pc = 0x207e48u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_207e4c:
    // 0x207e4c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_207e50:
    // 0x207e50: 0xae22015c  sw          $v0, 0x15C($s1)
    ctx->pc = 0x207e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
label_207e54:
    // 0x207e54: 0xc084860  jal         func_212180
label_207e58:
    if (ctx->pc == 0x207E58u) {
        ctx->pc = 0x207E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E54u;
        // 0x207e58: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E5Cu;
        goto label_207e5c;
    }
    ctx->pc = 0x207E54u;
    SET_GPR_U32(ctx, 31, 0x207E5Cu);
    ctx->pc = 0x207E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E54u;
    // 0x207e58: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212180u, 0x207E54u, 0x207E5Cu)) {
        return;
    }
    ctx->pc = 0x207E5Cu;
label_207e5c:
    // 0x207e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_207e60:
    // 0x207e60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207e60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_207e64:
    // 0x207e64: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_207e68:
    // 0x207e68: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x207e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_207e6c:
    // 0x207e6c: 0x1860003a  blez        $v1, . + 4 + (0x3A << 2)
label_207e70:
    if (ctx->pc == 0x207E70u) {
        ctx->pc = 0x207E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E6Cu;
        // 0x207e70: 0xae200164  sw          $zero, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E74u;
        goto label_207e74;
    }
    ctx->pc = 0x207E6Cu;
    {
        const bool branch_taken_0x207e6c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x207E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E6Cu;
        // 0x207e70: 0xae200164  sw          $zero, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e6c) {
            ctx->pc = 0x207F58u;
            goto label_207f58;
        }
    }
    ctx->pc = 0x207E74u;
label_207e74:
    // 0x207e74: 0x2634014c  addiu       $s4, $s1, 0x14C
    ctx->pc = 0x207e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_207e78:
    // 0x207e78: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_207e7c:
    // 0x207e7c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x207e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_207e80:
    // 0x207e80: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x207e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_207e84:
    // 0x207e84: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e88:
    // 0x207e88: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x207e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_207e8c:
    // 0x207e8c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x207e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_207e90:
    // 0x207e90: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_207e94:
    // 0x207e94: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_207e98:
    // 0x207e98: 0x649018  mult        $s2, $v1, $a0
    ctx->pc = 0x207e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_207e9c:
    // 0x207e9c: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x207e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_207ea0:
    // 0x207ea0: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x207ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
label_207ea4:
    // 0x207ea4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x207ea4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_207ea8:
    // 0x207ea8: 0xace40038  sw          $a0, 0x38($a3)
    ctx->pc = 0x207ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 4));
label_207eac:
    // 0x207eac: 0xacf2003c  sw          $s2, 0x3C($a3)
    ctx->pc = 0x207eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 18));
label_207eb0:
    // 0x207eb0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x207eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207eb4:
    // 0x207eb4: 0xace50040  sw          $a1, 0x40($a3)
    ctx->pc = 0x207eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 5));
label_207eb8:
    // 0x207eb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_207ebc:
    if (ctx->pc == 0x207EBCu) {
        ctx->pc = 0x207EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB8u;
        // 0x207ebc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EC0u;
        goto label_207ec0;
    }
    ctx->pc = 0x207EB8u;
    {
        const bool branch_taken_0x207eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207eb8) {
            ctx->pc = 0x207EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207EB8u;
            // 0x207ebc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207EC0u;
            goto label_207ec0;
        }
    }
    ctx->pc = 0x207EC0u;
label_207ec0:
    // 0x207ec0: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x207ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_207ec4:
    // 0x207ec4: 0x3010  mfhi        $a2
    ctx->pc = 0x207ec4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_207ec8:
    // 0x207ec8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x207ec8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_207ecc:
    // 0x207ecc: 0xc6180b  movn        $v1, $a2, $a2
    ctx->pc = 0x207eccu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
label_207ed0:
    // 0x207ed0: 0xace30044  sw          $v1, 0x44($a3)
    ctx->pc = 0x207ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 3));
label_207ed4:
    // 0x207ed4: 0x2810  mfhi        $a1
    ctx->pc = 0x207ed4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_207ed8:
    // 0x207ed8: 0xa5200b  movn        $a0, $a1, $a1
    ctx->pc = 0x207ed8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_207edc:
    // 0x207edc: 0xace40048  sw          $a0, 0x48($a3)
    ctx->pc = 0x207edcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 4));
label_207ee0:
    // 0x207ee0: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x207ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_207ee4:
    // 0x207ee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_207ee8:
    // 0x207ee8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x207ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_207eec:
    // 0x207eec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_207ef0:
    if (ctx->pc == 0x207EF0u) {
        ctx->pc = 0x207EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EECu;
        // 0x207ef0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EF4u;
        goto label_207ef4;
    }
    ctx->pc = 0x207EECu;
    {
        const bool branch_taken_0x207eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207eec) {
            ctx->pc = 0x207EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207EECu;
            // 0x207ef0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207F10u;
            goto label_207f10;
        }
    }
    ctx->pc = 0x207EF4u;
label_207ef4:
    // 0x207ef4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207ef8:
    // 0x207ef8: 0xac550014  sw          $s5, 0x14($v0)
    ctx->pc = 0x207ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 21));
label_207efc:
    // 0x207efc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207f00:
    // 0x207f00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207f04:
    // 0x207f04: 0x40f809  jalr        $v0
label_207f08:
    if (ctx->pc == 0x207F08u) {
        ctx->pc = 0x207F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F04u;
        // 0x207f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F0Cu;
        goto label_207f0c;
    }
    ctx->pc = 0x207F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207F0Cu);
        ctx->pc = 0x207F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F04u;
        // 0x207f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F04u, 0x207F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207F0Cu;
label_207f0c:
    // 0x207f0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_207f10:
    // 0x207f10: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_207f14:
    if (ctx->pc == 0x207F14u) {
        ctx->pc = 0x207F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F10u;
        // 0x207f14: 0x26660001  addiu       $a2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F18u;
        goto label_207f18;
    }
    ctx->pc = 0x207F10u;
    {
        const bool branch_taken_0x207f10 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x207F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F10u;
        // 0x207f14: 0x26660001  addiu       $a2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f10) {
            ctx->pc = 0x207F44u;
            goto label_207f44;
        }
    }
    ctx->pc = 0x207F18u;
label_207f18:
    // 0x207f18: 0x26250168  addiu       $a1, $s1, 0x168
    ctx->pc = 0x207f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_207f1c:
    // 0x207f1c: 0x0  nop
    ctx->pc = 0x207f1cu;
    // NOP
label_207f20:
    // 0x207f20: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x207f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_207f24:
    // 0x207f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207f28:
    // 0x207f28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_207f2c:
    // 0x207f2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207f30:
    // 0x207f30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x207f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_207f34:
    // 0x207f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_207f38:
    // 0x207f38: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x207f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_207f3c:
    // 0x207f3c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_207f40:
    if (ctx->pc == 0x207F40u) {
        ctx->pc = 0x207F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F3Cu;
        // 0x207f40: 0xae220164  sw          $v0, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F44u;
        goto label_207f44;
    }
    ctx->pc = 0x207F3Cu;
    {
        const bool branch_taken_0x207f3c = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x207F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F3Cu;
        // 0x207f40: 0xae220164  sw          $v0, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f3c) {
            ctx->pc = 0x207F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207f20;
        }
    }
    ctx->pc = 0x207F44u;
label_207f44:
    // 0x207f44: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x207f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_207f48:
    // 0x207f48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x207f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_207f4c:
    // 0x207f4c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x207f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_207f50:
    // 0x207f50: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_207f54:
    if (ctx->pc == 0x207F54u) {
        ctx->pc = 0x207F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F50u;
        // 0x207f54: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F58u;
        goto label_207f58;
    }
    ctx->pc = 0x207F50u;
    {
        const bool branch_taken_0x207f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F50u;
        // 0x207f54: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f50) {
            ctx->pc = 0x207E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e80;
        }
    }
    ctx->pc = 0x207F58u;
label_207f58:
    // 0x207f58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x207f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207f5c:
    // 0x207f5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x207f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207f60:
    // 0x207f60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x207f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207f64:
    // 0x207f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207f68:
    // 0x207f68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x207f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207f6c:
    // 0x207f6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x207f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207f70:
    // 0x207f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207f74:
    // 0x207f74: 0x3e00008  jr          $ra
label_207f78:
    if (ctx->pc == 0x207F78u) {
        ctx->pc = 0x207F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F74u;
        // 0x207f78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F7Cu;
        goto label_207f7c;
    }
    ctx->pc = 0x207F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F74u;
        // 0x207f78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207F7Cu;
label_207f7c:
    // 0x207f7c: 0x0  nop
    ctx->pc = 0x207f7cu;
    // NOP
    ctx->pc = 0x207f80u;
}
