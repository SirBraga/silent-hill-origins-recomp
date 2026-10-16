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

// Function: sub_00297CA8
// Address: 0x297ca8 - 0x297ed0
void sub_00297CA8_0x297ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297CA8_0x297ca8");
#endif

    switch (ctx->pc) {
        case 0x297ca8u: goto label_297ca8;
        case 0x297cacu: goto label_297cac;
        case 0x297cb0u: goto label_297cb0;
        case 0x297cb4u: goto label_297cb4;
        case 0x297cb8u: goto label_297cb8;
        case 0x297cbcu: goto label_297cbc;
        case 0x297cc0u: goto label_297cc0;
        case 0x297cc4u: goto label_297cc4;
        case 0x297cc8u: goto label_297cc8;
        case 0x297cccu: goto label_297ccc;
        case 0x297cd0u: goto label_297cd0;
        case 0x297cd4u: goto label_297cd4;
        case 0x297cd8u: goto label_297cd8;
        case 0x297cdcu: goto label_297cdc;
        case 0x297ce0u: goto label_297ce0;
        case 0x297ce4u: goto label_297ce4;
        case 0x297ce8u: goto label_297ce8;
        case 0x297cecu: goto label_297cec;
        case 0x297cf0u: goto label_297cf0;
        case 0x297cf4u: goto label_297cf4;
        case 0x297cf8u: goto label_297cf8;
        case 0x297cfcu: goto label_297cfc;
        case 0x297d00u: goto label_297d00;
        case 0x297d04u: goto label_297d04;
        case 0x297d08u: goto label_297d08;
        case 0x297d0cu: goto label_297d0c;
        case 0x297d10u: goto label_297d10;
        case 0x297d14u: goto label_297d14;
        case 0x297d18u: goto label_297d18;
        case 0x297d1cu: goto label_297d1c;
        case 0x297d20u: goto label_297d20;
        case 0x297d24u: goto label_297d24;
        case 0x297d28u: goto label_297d28;
        case 0x297d2cu: goto label_297d2c;
        case 0x297d30u: goto label_297d30;
        case 0x297d34u: goto label_297d34;
        case 0x297d38u: goto label_297d38;
        case 0x297d3cu: goto label_297d3c;
        case 0x297d40u: goto label_297d40;
        case 0x297d44u: goto label_297d44;
        case 0x297d48u: goto label_297d48;
        case 0x297d4cu: goto label_297d4c;
        case 0x297d50u: goto label_297d50;
        case 0x297d54u: goto label_297d54;
        case 0x297d58u: goto label_297d58;
        case 0x297d5cu: goto label_297d5c;
        case 0x297d60u: goto label_297d60;
        case 0x297d64u: goto label_297d64;
        case 0x297d68u: goto label_297d68;
        case 0x297d6cu: goto label_297d6c;
        case 0x297d70u: goto label_297d70;
        case 0x297d74u: goto label_297d74;
        case 0x297d78u: goto label_297d78;
        case 0x297d7cu: goto label_297d7c;
        case 0x297d80u: goto label_297d80;
        case 0x297d84u: goto label_297d84;
        case 0x297d88u: goto label_297d88;
        case 0x297d8cu: goto label_297d8c;
        case 0x297d90u: goto label_297d90;
        case 0x297d94u: goto label_297d94;
        case 0x297d98u: goto label_297d98;
        case 0x297d9cu: goto label_297d9c;
        case 0x297da0u: goto label_297da0;
        case 0x297da4u: goto label_297da4;
        case 0x297da8u: goto label_297da8;
        case 0x297dacu: goto label_297dac;
        case 0x297db0u: goto label_297db0;
        case 0x297db4u: goto label_297db4;
        case 0x297db8u: goto label_297db8;
        case 0x297dbcu: goto label_297dbc;
        case 0x297dc0u: goto label_297dc0;
        case 0x297dc4u: goto label_297dc4;
        case 0x297dc8u: goto label_297dc8;
        case 0x297dccu: goto label_297dcc;
        case 0x297dd0u: goto label_297dd0;
        case 0x297dd4u: goto label_297dd4;
        case 0x297dd8u: goto label_297dd8;
        case 0x297ddcu: goto label_297ddc;
        case 0x297de0u: goto label_297de0;
        case 0x297de4u: goto label_297de4;
        case 0x297de8u: goto label_297de8;
        case 0x297decu: goto label_297dec;
        case 0x297df0u: goto label_297df0;
        case 0x297df4u: goto label_297df4;
        case 0x297df8u: goto label_297df8;
        case 0x297dfcu: goto label_297dfc;
        case 0x297e00u: goto label_297e00;
        case 0x297e04u: goto label_297e04;
        case 0x297e08u: goto label_297e08;
        case 0x297e0cu: goto label_297e0c;
        case 0x297e10u: goto label_297e10;
        case 0x297e14u: goto label_297e14;
        case 0x297e18u: goto label_297e18;
        case 0x297e1cu: goto label_297e1c;
        case 0x297e20u: goto label_297e20;
        case 0x297e24u: goto label_297e24;
        case 0x297e28u: goto label_297e28;
        case 0x297e2cu: goto label_297e2c;
        case 0x297e30u: goto label_297e30;
        case 0x297e34u: goto label_297e34;
        case 0x297e38u: goto label_297e38;
        case 0x297e3cu: goto label_297e3c;
        case 0x297e40u: goto label_297e40;
        case 0x297e44u: goto label_297e44;
        case 0x297e48u: goto label_297e48;
        case 0x297e4cu: goto label_297e4c;
        case 0x297e50u: goto label_297e50;
        case 0x297e54u: goto label_297e54;
        case 0x297e58u: goto label_297e58;
        case 0x297e5cu: goto label_297e5c;
        case 0x297e60u: goto label_297e60;
        case 0x297e64u: goto label_297e64;
        case 0x297e68u: goto label_297e68;
        case 0x297e6cu: goto label_297e6c;
        case 0x297e70u: goto label_297e70;
        case 0x297e74u: goto label_297e74;
        case 0x297e78u: goto label_297e78;
        case 0x297e7cu: goto label_297e7c;
        case 0x297e80u: goto label_297e80;
        case 0x297e84u: goto label_297e84;
        case 0x297e88u: goto label_297e88;
        case 0x297e8cu: goto label_297e8c;
        case 0x297e90u: goto label_297e90;
        case 0x297e94u: goto label_297e94;
        case 0x297e98u: goto label_297e98;
        case 0x297e9cu: goto label_297e9c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297ea4u: goto label_297ea4;
        case 0x297ea8u: goto label_297ea8;
        case 0x297eacu: goto label_297eac;
        case 0x297eb0u: goto label_297eb0;
        case 0x297eb4u: goto label_297eb4;
        case 0x297eb8u: goto label_297eb8;
        case 0x297ebcu: goto label_297ebc;
        case 0x297ec0u: goto label_297ec0;
        case 0x297ec4u: goto label_297ec4;
        case 0x297ec8u: goto label_297ec8;
        case 0x297eccu: goto label_297ecc;
        default: break;
    }

    ctx->pc = 0x297ca8u;

label_297ca8:
    // 0x297ca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_297cac:
    // 0x297cac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_297cb0:
    // 0x297cb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_297cb4:
    // 0x297cb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297cb8:
    // 0x297cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297cbc:
    // 0x297cbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_297cc0:
    // 0x297cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297cc4:
    // 0x297cc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297cc8:
    // 0x297cc8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_297ccc:
    // 0x297ccc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_297cd0:
    if (ctx->pc == 0x297CD0u) {
        ctx->pc = 0x297CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CCCu;
        // 0x297cd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CD4u;
        goto label_297cd4;
    }
    ctx->pc = 0x297CCCu;
    {
        const bool branch_taken_0x297ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CCCu;
        // 0x297cd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ccc) {
            ctx->pc = 0x297CE4u;
            goto label_297ce4;
        }
    }
    ctx->pc = 0x297CD4u;
label_297cd4:
    // 0x297cd4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_297cd8:
    // 0x297cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297cdc:
    // 0x297cdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_297ce0:
    if (ctx->pc == 0x297CE0u) {
        ctx->pc = 0x297CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CDCu;
        // 0x297ce0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CE4u;
        goto label_297ce4;
    }
    ctx->pc = 0x297CDCu;
    {
        const bool branch_taken_0x297cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CDCu;
        // 0x297ce0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cdc) {
            ctx->pc = 0x297D10u;
            goto label_297d10;
        }
    }
    ctx->pc = 0x297CE4u;
label_297ce4:
    // 0x297ce4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_297ce8:
    // 0x297ce8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_297cec:
    if (ctx->pc == 0x297CECu) {
        ctx->pc = 0x297CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CE8u;
        // 0x297cec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CF0u;
        goto label_297cf0;
    }
    ctx->pc = 0x297CE8u;
    {
        const bool branch_taken_0x297ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CE8u;
        // 0x297cec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ce8) {
            ctx->pc = 0x297D10u;
            goto label_297d10;
        }
    }
    ctx->pc = 0x297CF0u;
label_297cf0:
    // 0x297cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_297cf4:
    // 0x297cf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_297cf8:
    // 0x297cf8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_297cfc:
    // 0x297cfc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_297d00:
    if (ctx->pc == 0x297D00u) {
        ctx->pc = 0x297D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CFCu;
        // 0x297d00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D04u;
        goto label_297d04;
    }
    ctx->pc = 0x297CFCu;
    {
        const bool branch_taken_0x297cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x297D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CFCu;
        // 0x297d00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cfc) {
            ctx->pc = 0x297D10u;
            goto label_297d10;
        }
    }
    ctx->pc = 0x297D04u;
label_297d04:
    // 0x297d04: 0xc0a65a0  jal         func_299680
label_297d08:
    if (ctx->pc == 0x297D08u) {
        ctx->pc = 0x297D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D04u;
        // 0x297d08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D0Cu;
        goto label_297d0c;
    }
    ctx->pc = 0x297D04u;
    SET_GPR_U32(ctx, 31, 0x297D0Cu);
    ctx->pc = 0x297D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D04u;
    // 0x297d08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297D04u, 0x297D0Cu)) {
        return;
    }
    ctx->pc = 0x297D0Cu;
label_297d0c:
    // 0x297d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297d10:
    // 0x297d10: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_297d14:
    if (ctx->pc == 0x297D14u) {
        ctx->pc = 0x297D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D10u;
        // 0x297d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D18u;
        goto label_297d18;
    }
    ctx->pc = 0x297D10u;
    {
        const bool branch_taken_0x297d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D10u;
        // 0x297d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d10) {
            ctx->pc = 0x297D50u;
            goto label_297d50;
        }
    }
    ctx->pc = 0x297D18u;
label_297d18:
    // 0x297d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297d1c:
    // 0x297d1c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x297d1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_297d20:
    // 0x297d20: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x297d20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_297d24:
    // 0x297d24: 0xc0a7380  jal         func_29CE00
label_297d28:
    if (ctx->pc == 0x297D28u) {
        ctx->pc = 0x297D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D24u;
        // 0x297d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D2Cu;
        goto label_297d2c;
    }
    ctx->pc = 0x297D24u;
    SET_GPR_U32(ctx, 31, 0x297D2Cu);
    ctx->pc = 0x297D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D24u;
    // 0x297d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CE00u, 0x297D24u, 0x297D2Cu)) {
        return;
    }
    ctx->pc = 0x297D2Cu;
label_297d2c:
    // 0x297d2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_297d30:
    // 0x297d30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_297d34:
    // 0x297d34: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
label_297d38:
    if (ctx->pc == 0x297D38u) {
        ctx->pc = 0x297D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D34u;
        // 0x297d38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D3Cu;
        goto label_297d3c;
    }
    ctx->pc = 0x297D34u;
    {
        const bool branch_taken_0x297d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x297D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D34u;
        // 0x297d38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d34) {
            ctx->pc = 0x297D54u;
            goto label_297d54;
        }
    }
    ctx->pc = 0x297D3Cu;
label_297d3c:
    // 0x297d3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297d40:
    // 0x297d40: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_297d44:
    // 0x297d44: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x297d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_297d48:
    // 0x297d48: 0x10000002  b           . + 4 + (0x2 << 2)
label_297d4c:
    if (ctx->pc == 0x297D4Cu) {
        ctx->pc = 0x297D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D48u;
        // 0x297d4c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D50u;
        goto label_297d50;
    }
    ctx->pc = 0x297D48u;
    {
        const bool branch_taken_0x297d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D48u;
        // 0x297d4c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d48) {
            ctx->pc = 0x297D54u;
            goto label_297d54;
        }
    }
    ctx->pc = 0x297D50u;
label_297d50:
    // 0x297d50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x297d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_297d54:
    // 0x297d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297d58:
    // 0x297d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_297d5c:
    // 0x297d5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297d60:
    // 0x297d60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297d64:
    // 0x297d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297d68:
    // 0x297d68: 0x3e00008  jr          $ra
label_297d6c:
    if (ctx->pc == 0x297D6Cu) {
        ctx->pc = 0x297D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D68u;
        // 0x297d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D70u;
        goto label_297d70;
    }
    ctx->pc = 0x297D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D68u;
        // 0x297d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297D70u;
label_297d70:
    // 0x297d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_297d74:
    // 0x297d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297d78:
    // 0x297d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297d7c:
    // 0x297d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297d80:
    // 0x297d80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297d84:
    // 0x297d84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x297d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297d88:
    // 0x297d88: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_297d8c:
    if (ctx->pc == 0x297D8Cu) {
        ctx->pc = 0x297D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D88u;
        // 0x297d8c: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D90u;
        goto label_297d90;
    }
    ctx->pc = 0x297D88u;
    {
        const bool branch_taken_0x297d88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x297d88) {
            ctx->pc = 0x297D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297D88u;
            // 0x297d8c: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297D98u;
            goto label_297d98;
        }
    }
    ctx->pc = 0x297D90u;
label_297d90:
    // 0x297d90: 0x1000000d  b           . + 4 + (0xD << 2)
label_297d94:
    if (ctx->pc == 0x297D94u) {
        ctx->pc = 0x297D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D90u;
        // 0x297d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D98u;
        goto label_297d98;
    }
    ctx->pc = 0x297D90u;
    {
        const bool branch_taken_0x297d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D90u;
        // 0x297d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d90) {
            ctx->pc = 0x297DC8u;
            goto label_297dc8;
        }
    }
    ctx->pc = 0x297D98u;
label_297d98:
    // 0x297d98: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x297d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_297d9c:
    // 0x297d9c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_297da0:
    // 0x297da0: 0x40f809  jalr        $v0
label_297da4:
    if (ctx->pc == 0x297DA4u) {
        ctx->pc = 0x297DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA0u;
        // 0x297da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DA8u;
        goto label_297da8;
    }
    ctx->pc = 0x297DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297DA8u);
        ctx->pc = 0x297DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA0u;
        // 0x297da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DA0u, 0x297DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297DA8u;
label_297da8:
    // 0x297da8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_297dac:
    if (ctx->pc == 0x297DACu) {
        ctx->pc = 0x297DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA8u;
        // 0x297dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DB0u;
        goto label_297db0;
    }
    ctx->pc = 0x297DA8u;
    {
        const bool branch_taken_0x297da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA8u;
        // 0x297dac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297da8) {
            ctx->pc = 0x297DC4u;
            goto label_297dc4;
        }
    }
    ctx->pc = 0x297DB0u;
label_297db0:
    // 0x297db0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x297db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297db4:
    // 0x297db4: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x297db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_297db8:
    // 0x297db8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x297db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_297dbc:
    // 0x297dbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_297dc0:
    if (ctx->pc == 0x297DC0u) {
        ctx->pc = 0x297DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DBCu;
        // 0x297dc0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DC4u;
        goto label_297dc4;
    }
    ctx->pc = 0x297DBCu;
    {
        const bool branch_taken_0x297dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DBCu;
        // 0x297dc0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dbc) {
            ctx->pc = 0x297DC8u;
            goto label_297dc8;
        }
    }
    ctx->pc = 0x297DC4u;
label_297dc4:
    // 0x297dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x297dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297dc8:
    // 0x297dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297dcc:
    // 0x297dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297dd0:
    // 0x297dd0: 0x3e00008  jr          $ra
label_297dd4:
    if (ctx->pc == 0x297DD4u) {
        ctx->pc = 0x297DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DD0u;
        // 0x297dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DD8u;
        goto label_297dd8;
    }
    ctx->pc = 0x297DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DD0u;
        // 0x297dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297DD8u;
label_297dd8:
    // 0x297dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_297ddc:
    // 0x297ddc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x297ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297de0:
    // 0x297de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297de4:
    // 0x297de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297de8:
    // 0x297de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297dec:
    // 0x297dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297df0:
    // 0x297df0: 0xc0a7a2a  jal         func_29E8A8
label_297df4:
    if (ctx->pc == 0x297DF4u) {
        ctx->pc = 0x297DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DF0u;
        // 0x297df4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DF8u;
        goto label_297df8;
    }
    ctx->pc = 0x297DF0u;
    SET_GPR_U32(ctx, 31, 0x297DF8u);
    ctx->pc = 0x297DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DF0u;
    // 0x297df4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E8A8u, 0x297DF0u, 0x297DF8u)) {
        return;
    }
    ctx->pc = 0x297DF8u;
label_297df8:
    // 0x297df8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297dfc:
    // 0x297dfc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_297e00:
    if (ctx->pc == 0x297E00u) {
        ctx->pc = 0x297E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DFCu;
        // 0x297e00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E04u;
        goto label_297e04;
    }
    ctx->pc = 0x297DFCu;
    {
        const bool branch_taken_0x297dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DFCu;
        // 0x297e00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dfc) {
            ctx->pc = 0x297E18u;
            goto label_297e18;
        }
    }
    ctx->pc = 0x297E04u;
label_297e04:
    // 0x297e04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297e08:
    // 0x297e08: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_297e0c:
    // 0x297e0c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x297e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_297e10:
    // 0x297e10: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x297e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_297e14:
    // 0x297e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297e18:
    // 0x297e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297e1c:
    // 0x297e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297e20:
    // 0x297e20: 0x3e00008  jr          $ra
label_297e24:
    if (ctx->pc == 0x297E24u) {
        ctx->pc = 0x297E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E20u;
        // 0x297e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E28u;
        goto label_297e28;
    }
    ctx->pc = 0x297E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E20u;
        // 0x297e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E28u;
label_297e28:
    // 0x297e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_297e2c:
    // 0x297e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x297e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297e30:
    // 0x297e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297e34:
    // 0x297e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297e38:
    // 0x297e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297e3c:
    // 0x297e3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297e40:
    // 0x297e40: 0xc0a7a02  jal         func_29E808
label_297e44:
    if (ctx->pc == 0x297E44u) {
        ctx->pc = 0x297E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E40u;
        // 0x297e44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E48u;
        goto label_297e48;
    }
    ctx->pc = 0x297E40u;
    SET_GPR_U32(ctx, 31, 0x297E48u);
    ctx->pc = 0x297E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E40u;
    // 0x297e44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x297E40u, 0x297E48u)) {
        return;
    }
    ctx->pc = 0x297E48u;
label_297e48:
    // 0x297e48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297e4c:
    // 0x297e4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_297e50:
    if (ctx->pc == 0x297E50u) {
        ctx->pc = 0x297E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E4Cu;
        // 0x297e50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E54u;
        goto label_297e54;
    }
    ctx->pc = 0x297E4Cu;
    {
        const bool branch_taken_0x297e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E4Cu;
        // 0x297e50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e4c) {
            ctx->pc = 0x297E68u;
            goto label_297e68;
        }
    }
    ctx->pc = 0x297E54u;
label_297e54:
    // 0x297e54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297e58:
    // 0x297e58: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_297e5c:
    // 0x297e5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x297e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_297e60:
    // 0x297e60: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x297e60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_297e64:
    // 0x297e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297e68:
    // 0x297e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297e6c:
    // 0x297e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297e70:
    // 0x297e70: 0x3e00008  jr          $ra
label_297e74:
    if (ctx->pc == 0x297E74u) {
        ctx->pc = 0x297E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E70u;
        // 0x297e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E78u;
        goto label_297e78;
    }
    ctx->pc = 0x297E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E70u;
        // 0x297e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E78u;
label_297e78:
    // 0x297e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_297e7c:
    // 0x297e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297e80:
    // 0x297e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_297e84:
    // 0x297e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297e88:
    // 0x297e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297e8c:
    // 0x297e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297e90:
    // 0x297e90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x297e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297e94:
    // 0x297e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297e98:
    // 0x297e98: 0xc0a7a02  jal         func_29E808
label_297e9c:
    if (ctx->pc == 0x297E9Cu) {
        ctx->pc = 0x297E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E98u;
        // 0x297e9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297EA0u;
        goto label_297ea0;
    }
    ctx->pc = 0x297E98u;
    SET_GPR_U32(ctx, 31, 0x297EA0u);
    ctx->pc = 0x297E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E98u;
    // 0x297e9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x297E98u, 0x297EA0u)) {
        return;
    }
    ctx->pc = 0x297EA0u;
label_297ea0:
    // 0x297ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297ea4:
    // 0x297ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297ea8:
    // 0x297ea8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_297eac:
    if (ctx->pc == 0x297EACu) {
        ctx->pc = 0x297EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EA8u;
        // 0x297eac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297EB0u;
        goto label_297eb0;
    }
    ctx->pc = 0x297EA8u;
    {
        const bool branch_taken_0x297ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x297EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EA8u;
        // 0x297eac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ea8) {
            ctx->pc = 0x297EC0u;
            goto label_297ec0;
        }
    }
    ctx->pc = 0x297EB0u;
label_297eb0:
    // 0x297eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297eb4:
    // 0x297eb4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x297eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_297eb8:
    // 0x297eb8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x297eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_297ebc:
    // 0x297ebc: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x297ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_297ec0:
    // 0x297ec0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x297ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297ec4:
    // 0x297ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297ec8:
    // 0x297ec8: 0x3e00008  jr          $ra
label_297ecc:
    if (ctx->pc == 0x297ECCu) {
        ctx->pc = 0x297ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EC8u;
        // 0x297ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297ED0u;
        goto label_fallthrough_0x297ec8;
    }
    ctx->pc = 0x297EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EC8u;
        // 0x297ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x297ec8:
    ctx->pc = 0x297ED0u;
}
