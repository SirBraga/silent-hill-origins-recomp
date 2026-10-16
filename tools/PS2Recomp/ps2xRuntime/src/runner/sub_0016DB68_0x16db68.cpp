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

// Function: sub_0016DB68
// Address: 0x16db68 - 0x16dca0
void sub_0016DB68_0x16db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB68_0x16db68");
#endif

    switch (ctx->pc) {
        case 0x16db94u: goto label_16db94;
        case 0x16dbb4u: goto label_16dbb4;
        case 0x16dbbcu: goto label_16dbbc;
        case 0x16dbccu: goto label_16dbcc;
        case 0x16dc00u: goto label_16dc00;
        case 0x16dc18u: goto label_16dc18;
        case 0x16dc34u: goto label_16dc34;
        case 0x16dc48u: goto label_16dc48;
        case 0x16dc5cu: goto label_16dc5c;
        case 0x16dc8cu: goto label_16dc8c;
        default: break;
    }

    ctx->pc = 0x16db68u;

    // 0x16db68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16db6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16db70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16db74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16db74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16db7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16db80: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16db84: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x16DB84u;
    {
        const bool branch_taken_0x16db84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB84u;
        // 0x16db88: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db84) {
            ctx->pc = 0x16DC20u;
            goto label_16dc20;
        }
    }
    ctx->pc = 0x16DB8Cu;
    // 0x16db8c: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x16DB8Cu;
    SET_GPR_U32(ctx, 31, 0x16DB94u);
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x16DB8Cu, 0x16DB94u)) {
        return;
    }
    ctx->pc = 0x16DB94u;
label_16db94:
    // 0x16db94: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x16DB94u;
    {
        const bool branch_taken_0x16db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db94) {
            ctx->pc = 0x16DB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB94u;
            // 0x16db98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DC90u;
            goto label_16dc90;
        }
    }
    ctx->pc = 0x16DB9Cu;
    // 0x16db9c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16dba0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16dba4: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16dba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbac: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16DBACu;
    SET_GPR_U32(ctx, 31, 0x16DBB4u);
    ctx->pc = 0x16DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBACu;
    // 0x16dbb0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16DBACu, 0x16DBB4u)) {
        return;
    }
    ctx->pc = 0x16DBB4u;
label_16dbb4:
    // 0x16dbb4: 0xc075d54  jal         func_1D7550
    ctx->pc = 0x16DBB4u;
    SET_GPR_U32(ctx, 31, 0x16DBBCu);
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x16DBB4u, 0x16DBBCu)) {
        return;
    }
    ctx->pc = 0x16DBBCu;
label_16dbbc:
    // 0x16dbbc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DBBCu;
    {
        const bool branch_taken_0x16dbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbbc) {
            ctx->pc = 0x16DBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DBBCu;
            // 0x16dbc0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DBD8u;
            goto label_16dbd8;
        }
    }
    ctx->pc = 0x16DBC4u;
    // 0x16dbc4: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x16DBC4u;
    SET_GPR_U32(ctx, 31, 0x16DBCCu);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x16DBC4u, 0x16DBCCu)) {
        return;
    }
    ctx->pc = 0x16DBCCu;
label_16dbcc:
    // 0x16dbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dbd0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x16dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x16dbd4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_16dbd8:
    // 0x16dbd8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x16dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x16dbdc: 0x24a54db0  addiu       $a1, $a1, 0x4DB0
    ctx->pc = 0x16dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19888));
    // 0x16dbe0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16dbe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16dbe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16dbecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16dbf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16dbf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbf8: 0xc06b5e0  jal         func_1AD780
    ctx->pc = 0x16DBF8u;
    SET_GPR_U32(ctx, 31, 0x16DC00u);
    ctx->pc = 0x16DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBF8u;
    // 0x16dbfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD780u, 0x16DBF8u, 0x16DC00u)) {
        return;
    }
    ctx->pc = 0x16DC00u;
label_16dc00:
    // 0x16dc00: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x16dc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x16dc04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16dc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x16dc08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16dc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16dc0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc10: 0xc06b8fc  jal         func_1AE3F0
    ctx->pc = 0x16DC10u;
    SET_GPR_U32(ctx, 31, 0x16DC18u);
    ctx->pc = 0x16DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC10u;
    // 0x16dc14: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE3F0u, 0x16DC10u, 0x16DC18u)) {
        return;
    }
    ctx->pc = 0x16DC18u;
label_16dc18:
    // 0x16dc18: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16DC18u;
    {
        const bool branch_taken_0x16dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC18u;
        // 0x16dc1c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc18) {
            ctx->pc = 0x16DC90u;
            goto label_16dc90;
        }
    }
    ctx->pc = 0x16DC20u;
label_16dc20:
    // 0x16dc20: 0x8c628898  lw          $v0, -0x7768($v1)
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
    // 0x16dc24: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16DC24u;
    {
        const bool branch_taken_0x16dc24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC24u;
        // 0x16dc28: 0x24718898  addiu       $s1, $v1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc24) {
            ctx->pc = 0x16DC8Cu;
            goto label_16dc8c;
        }
    }
    ctx->pc = 0x16DC2Cu;
    // 0x16dc2c: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x16DC2Cu;
    SET_GPR_U32(ctx, 31, 0x16DC34u);
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x16DC2Cu, 0x16DC34u)) {
        return;
    }
    ctx->pc = 0x16DC34u;
label_16dc34:
    // 0x16dc34: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x16DC34u;
    {
        const bool branch_taken_0x16dc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc34) {
            ctx->pc = 0x16DC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DC34u;
            // 0x16dc38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DC90u;
            goto label_16dc90;
        }
    }
    ctx->pc = 0x16DC3Cu;
    // 0x16dc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc40: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16DC40u;
    SET_GPR_U32(ctx, 31, 0x16DC48u);
    ctx->pc = 0x16DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC40u;
    // 0x16dc44: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16DC40u, 0x16DC48u)) {
        return;
    }
    ctx->pc = 0x16DC48u;
label_16dc48:
    // 0x16dc48: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16dc4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DC4Cu;
    {
        const bool branch_taken_0x16dc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC4Cu;
        // 0x16dc50: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc4c) {
            ctx->pc = 0x16DC60u;
            goto label_16dc60;
        }
    }
    ctx->pc = 0x16DC54u;
    // 0x16dc54: 0xc075d76  jal         func_1D75D8
    ctx->pc = 0x16DC54u;
    SET_GPR_U32(ctx, 31, 0x16DC5Cu);
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x16DC54u, 0x16DC5Cu)) {
        return;
    }
    ctx->pc = 0x16DC5Cu;
label_16dc5c:
    // 0x16dc5c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_16dc60:
    // 0x16dc60: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x16dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16dc64: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x16dc68: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DC68u;
    {
        const bool branch_taken_0x16dc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC68u;
        // 0x16dc6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc68) {
            ctx->pc = 0x16DC90u;
            goto label_16dc90;
        }
    }
    ctx->pc = 0x16DC70u;
    // 0x16dc70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16dc74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DC74u;
    {
        const bool branch_taken_0x16dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC74u;
        // 0x16dc78: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc74) {
            ctx->pc = 0x16DC90u;
            goto label_16dc90;
        }
    }
    ctx->pc = 0x16DC7Cu;
    // 0x16dc7c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16dc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc84: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16DC84u;
    SET_GPR_U32(ctx, 31, 0x16DC8Cu);
    ctx->pc = 0x16DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC84u;
    // 0x16dc88: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16DC84u, 0x16DC8Cu)) {
        return;
    }
    ctx->pc = 0x16DC8Cu;
label_16dc8c:
    // 0x16dc8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16dc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16dc90:
    // 0x16dc90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16dc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dc94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16dc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc98: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC98u;
        // 0x16dc9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DCA0u;
}
