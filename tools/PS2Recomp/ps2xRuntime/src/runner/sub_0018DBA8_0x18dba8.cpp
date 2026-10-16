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

// Function: sub_0018DBA8
// Address: 0x18dba8 - 0x18dde8
void sub_0018DBA8_0x18dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DBA8_0x18dba8");
#endif

    switch (ctx->pc) {
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc24u: goto label_18dc24;
        case 0x18dc28u: goto label_18dc28;
        case 0x18dc2cu: goto label_18dc2c;
        case 0x18dc30u: goto label_18dc30;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc3cu: goto label_18dc3c;
        case 0x18dc40u: goto label_18dc40;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc48u: goto label_18dc48;
        case 0x18dc4cu: goto label_18dc4c;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc54u: goto label_18dc54;
        case 0x18dc58u: goto label_18dc58;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc60u: goto label_18dc60;
        case 0x18dc64u: goto label_18dc64;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc6cu: goto label_18dc6c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc74u: goto label_18dc74;
        case 0x18dc78u: goto label_18dc78;
        case 0x18dc7cu: goto label_18dc7c;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc84u: goto label_18dc84;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dc8cu: goto label_18dc8c;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dc94u: goto label_18dc94;
        case 0x18dc98u: goto label_18dc98;
        case 0x18dc9cu: goto label_18dc9c;
        case 0x18dca0u: goto label_18dca0;
        case 0x18dca4u: goto label_18dca4;
        case 0x18dca8u: goto label_18dca8;
        case 0x18dcacu: goto label_18dcac;
        case 0x18dcb0u: goto label_18dcb0;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcb8u: goto label_18dcb8;
        case 0x18dcbcu: goto label_18dcbc;
        case 0x18dcc0u: goto label_18dcc0;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcc8u: goto label_18dcc8;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dcd4u: goto label_18dcd4;
        case 0x18dcd8u: goto label_18dcd8;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce4u: goto label_18dce4;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dcf4u: goto label_18dcf4;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dcfcu: goto label_18dcfc;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd04u: goto label_18dd04;
        case 0x18dd08u: goto label_18dd08;
        case 0x18dd0cu: goto label_18dd0c;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd14u: goto label_18dd14;
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd20u: goto label_18dd20;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd28u: goto label_18dd28;
        case 0x18dd2cu: goto label_18dd2c;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd40u: goto label_18dd40;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd48u: goto label_18dd48;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd54u: goto label_18dd54;
        case 0x18dd58u: goto label_18dd58;
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18dd60u: goto label_18dd60;
        case 0x18dd64u: goto label_18dd64;
        case 0x18dd68u: goto label_18dd68;
        case 0x18dd6cu: goto label_18dd6c;
        case 0x18dd70u: goto label_18dd70;
        case 0x18dd74u: goto label_18dd74;
        case 0x18dd78u: goto label_18dd78;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18dd80u: goto label_18dd80;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd88u: goto label_18dd88;
        case 0x18dd8cu: goto label_18dd8c;
        case 0x18dd90u: goto label_18dd90;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dd98u: goto label_18dd98;
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18dda0u: goto label_18dda0;
        case 0x18dda4u: goto label_18dda4;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddacu: goto label_18ddac;
        case 0x18ddb0u: goto label_18ddb0;
        case 0x18ddb4u: goto label_18ddb4;
        case 0x18ddb8u: goto label_18ddb8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddc0u: goto label_18ddc0;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18ddc8u: goto label_18ddc8;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18ddd0u: goto label_18ddd0;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18dddcu: goto label_18dddc;
        case 0x18dde0u: goto label_18dde0;
        case 0x18dde4u: goto label_18dde4;
        default: break;
    }

    ctx->pc = 0x18dba8u;

label_18dba8:
    // 0x18dba8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_18dbac:
    // 0x18dbac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_18dbb0:
    // 0x18dbb0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18dbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_18dbb4:
    // 0x18dbb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18dbb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18dbb8:
    // 0x18dbb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_18dbbc:
    // 0x18dbbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18dbbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18dbc0:
    // 0x18dbc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_18dbc4:
    // 0x18dbc4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18dbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_18dbc8:
    // 0x18dbc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18dbcc:
    // 0x18dbcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18dbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18dbd0:
    // 0x18dbd0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x18dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_18dbd4:
    // 0x18dbd4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_18dbd8:
    // 0x18dbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18dbdc:
    // 0x18dbdc: 0xc06354e  jal         func_18D538
label_18dbe0:
    if (ctx->pc == 0x18DBE0u) {
        ctx->pc = 0x18DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBDCu;
        // 0x18dbe0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBE4u;
        goto label_18dbe4;
    }
    ctx->pc = 0x18DBDCu;
    SET_GPR_U32(ctx, 31, 0x18DBE4u);
    ctx->pc = 0x18DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBDCu;
    // 0x18dbe0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x18DBDCu, 0x18DBE4u)) {
        return;
    }
    ctx->pc = 0x18DBE4u;
label_18dbe4:
    // 0x18dbe4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dbe8:
    // 0x18dbe8: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x18dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_18dbec:
    // 0x18dbec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x18dbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18dbf0:
    // 0x18dbf0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_18dbf4:
    if (ctx->pc == 0x18DBF4u) {
        ctx->pc = 0x18DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBF0u;
        // 0x18dbf4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBF8u;
        goto label_18dbf8;
    }
    ctx->pc = 0x18DBF0u;
    {
        const bool branch_taken_0x18dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBF0u;
        // 0x18dbf4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbf0) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DBF8u;
label_18dbf8:
    // 0x18dbf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_18dbfc:
    // 0x18dbfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18dc00:
    // 0x18dc00: 0x24429460  addiu       $v0, $v0, -0x6BA0
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939744));
label_18dc04:
    // 0x18dc04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18dc08:
    // 0x18dc08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18dc0c:
    // 0x18dc0c: 0x800008  jr          $a0
label_18dc10:
    if (ctx->pc == 0x18DC10u) {
        ctx->pc = 0x18DC14u;
        goto label_18dc14;
    }
    ctx->pc = 0x18DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC14u: goto label_18dc14;
            case 0x18DC30u: goto label_18dc30;
            case 0x18DC4Cu: goto label_18dc4c;
            case 0x18DC68u: goto label_18dc68;
            case 0x18DC84u: goto label_18dc84;
            case 0x18DCA0u: goto label_18dca0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18DC14u;
label_18dc14:
    // 0x18dc14: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc18:
    // 0x18dc18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dc1c:
    // 0x18dc1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dc20:
    // 0x18dc20: 0xc06413a  jal         func_1904E8
label_18dc24:
    if (ctx->pc == 0x18DC24u) {
        ctx->pc = 0x18DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC20u;
        // 0x18dc24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC28u;
        goto label_18dc28;
    }
    ctx->pc = 0x18DC20u;
    SET_GPR_U32(ctx, 31, 0x18DC28u);
    ctx->pc = 0x18DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC20u;
    // 0x18dc24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1904E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1904E8u, 0x18DC20u, 0x18DC28u)) {
        return;
    }
    ctx->pc = 0x18DC28u;
label_18dc28:
    // 0x18dc28: 0x10000023  b           . + 4 + (0x23 << 2)
label_18dc2c:
    if (ctx->pc == 0x18DC2Cu) {
        ctx->pc = 0x18DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC28u;
        // 0x18dc2c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC30u;
        goto label_18dc30;
    }
    ctx->pc = 0x18DC28u;
    {
        const bool branch_taken_0x18dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC28u;
        // 0x18dc2c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc28) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DC30u;
label_18dc30:
    // 0x18dc30: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc34:
    // 0x18dc34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dc38:
    // 0x18dc38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dc3c:
    // 0x18dc3c: 0xc06411a  jal         func_190468
label_18dc40:
    if (ctx->pc == 0x18DC40u) {
        ctx->pc = 0x18DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC3Cu;
        // 0x18dc40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC44u;
        goto label_18dc44;
    }
    ctx->pc = 0x18DC3Cu;
    SET_GPR_U32(ctx, 31, 0x18DC44u);
    ctx->pc = 0x18DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC3Cu;
    // 0x18dc40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190468u, 0x18DC3Cu, 0x18DC44u)) {
        return;
    }
    ctx->pc = 0x18DC44u;
label_18dc44:
    // 0x18dc44: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18dc48:
    if (ctx->pc == 0x18DC48u) {
        ctx->pc = 0x18DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC44u;
        // 0x18dc48: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC4Cu;
        goto label_18dc4c;
    }
    ctx->pc = 0x18DC44u;
    {
        const bool branch_taken_0x18dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC44u;
        // 0x18dc48: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc44) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DC4Cu;
label_18dc4c:
    // 0x18dc4c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dc4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc50:
    // 0x18dc50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dc54:
    // 0x18dc54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dc58:
    // 0x18dc58: 0xc064158  jal         func_190560
label_18dc5c:
    if (ctx->pc == 0x18DC5Cu) {
        ctx->pc = 0x18DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC58u;
        // 0x18dc5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC60u;
        goto label_18dc60;
    }
    ctx->pc = 0x18DC58u;
    SET_GPR_U32(ctx, 31, 0x18DC60u);
    ctx->pc = 0x18DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC58u;
    // 0x18dc5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190560u, 0x18DC58u, 0x18DC60u)) {
        return;
    }
    ctx->pc = 0x18DC60u;
label_18dc60:
    // 0x18dc60: 0x10000015  b           . + 4 + (0x15 << 2)
label_18dc64:
    if (ctx->pc == 0x18DC64u) {
        ctx->pc = 0x18DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC60u;
        // 0x18dc64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC68u;
        goto label_18dc68;
    }
    ctx->pc = 0x18DC60u;
    {
        const bool branch_taken_0x18dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC60u;
        // 0x18dc64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc60) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DC68u;
label_18dc68:
    // 0x18dc68: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dc68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc6c:
    // 0x18dc6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dc70:
    // 0x18dc70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dc74:
    // 0x18dc74: 0xc06377a  jal         func_18DDE8
label_18dc78:
    if (ctx->pc == 0x18DC78u) {
        ctx->pc = 0x18DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC74u;
        // 0x18dc78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC7Cu;
        goto label_18dc7c;
    }
    ctx->pc = 0x18DC74u;
    SET_GPR_U32(ctx, 31, 0x18DC7Cu);
    ctx->pc = 0x18DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC74u;
    // 0x18dc78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DDE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DDE8u, 0x18DC74u, 0x18DC7Cu)) {
        return;
    }
    ctx->pc = 0x18DC7Cu;
label_18dc7c:
    // 0x18dc7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_18dc80:
    if (ctx->pc == 0x18DC80u) {
        ctx->pc = 0x18DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC7Cu;
        // 0x18dc80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC84u;
        goto label_18dc84;
    }
    ctx->pc = 0x18DC7Cu;
    {
        const bool branch_taken_0x18dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC7Cu;
        // 0x18dc80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc7c) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DC84u;
label_18dc84:
    // 0x18dc84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dc84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc88:
    // 0x18dc88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dc8c:
    // 0x18dc8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dc90:
    // 0x18dc90: 0xc064192  jal         func_190648
label_18dc94:
    if (ctx->pc == 0x18DC94u) {
        ctx->pc = 0x18DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC90u;
        // 0x18dc94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC98u;
        goto label_18dc98;
    }
    ctx->pc = 0x18DC90u;
    SET_GPR_U32(ctx, 31, 0x18DC98u);
    ctx->pc = 0x18DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC90u;
    // 0x18dc94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190648u, 0x18DC90u, 0x18DC98u)) {
        return;
    }
    ctx->pc = 0x18DC98u;
label_18dc98:
    // 0x18dc98: 0x10000007  b           . + 4 + (0x7 << 2)
label_18dc9c:
    if (ctx->pc == 0x18DC9Cu) {
        ctx->pc = 0x18DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC98u;
        // 0x18dc9c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCA0u;
        goto label_18dca0;
    }
    ctx->pc = 0x18DC98u;
    {
        const bool branch_taken_0x18dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC98u;
        // 0x18dc9c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc98) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DCA0u;
label_18dca0:
    // 0x18dca0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18dca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dca4:
    // 0x18dca4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18dca8:
    // 0x18dca8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dcac:
    // 0x18dcac: 0xc0641b8  jal         func_1906E0
label_18dcb0:
    if (ctx->pc == 0x18DCB0u) {
        ctx->pc = 0x18DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCACu;
        // 0x18dcb0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCB4u;
        goto label_18dcb4;
    }
    ctx->pc = 0x18DCACu;
    SET_GPR_U32(ctx, 31, 0x18DCB4u);
    ctx->pc = 0x18DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCACu;
    // 0x18dcb0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1906E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1906E0u, 0x18DCACu, 0x18DCB4u)) {
        return;
    }
    ctx->pc = 0x18DCB4u;
label_18dcb4:
    // 0x18dcb4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18dcb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcb8:
    // 0x18dcb8: 0x16200027  bnez        $s1, . + 4 + (0x27 << 2)
label_18dcbc:
    if (ctx->pc == 0x18DCBCu) {
        ctx->pc = 0x18DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCB8u;
        // 0x18dcbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCC0u;
        goto label_18dcc0;
    }
    ctx->pc = 0x18DCB8u;
    {
        const bool branch_taken_0x18dcb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCB8u;
        // 0x18dcbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcb8) {
            ctx->pc = 0x18DD58u;
            goto label_18dd58;
        }
    }
    ctx->pc = 0x18DCC0u;
label_18dcc0:
    // 0x18dcc0: 0xc0808f0  jal         func_2023C0
label_18dcc4:
    if (ctx->pc == 0x18DCC4u) {
        ctx->pc = 0x18DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC0u;
        // 0x18dcc4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCC8u;
        goto label_18dcc8;
    }
    ctx->pc = 0x18DCC0u;
    SET_GPR_U32(ctx, 31, 0x18DCC8u);
    ctx->pc = 0x18DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCC0u;
    // 0x18dcc4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18DCC0u, 0x18DCC8u)) {
        return;
    }
    ctx->pc = 0x18DCC8u;
label_18dcc8:
    // 0x18dcc8: 0x2692009c  addiu       $s2, $s4, 0x9C
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
label_18dccc:
    // 0x18dccc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_18dcd0:
    // 0x18dcd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcd4:
    // 0x18dcd4: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x18dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_18dcd8:
    // 0x18dcd8: 0x40f809  jalr        $v0
label_18dcdc:
    if (ctx->pc == 0x18DCDCu) {
        ctx->pc = 0x18DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD8u;
        // 0x18dcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCE0u;
        goto label_18dce0;
    }
    ctx->pc = 0x18DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DCE0u);
        ctx->pc = 0x18DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD8u;
        // 0x18dcdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DCD8u, 0x18DCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18dce4:
    // 0x18dce4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dce8:
    // 0x18dce8: 0xc080924  jal         func_202490
label_18dcec:
    if (ctx->pc == 0x18DCECu) {
        ctx->pc = 0x18DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCE8u;
        // 0x18dcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCF0u;
        goto label_18dcf0;
    }
    ctx->pc = 0x18DCE8u;
    SET_GPR_U32(ctx, 31, 0x18DCF0u);
    ctx->pc = 0x18DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCE8u;
    // 0x18dcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18DCE8u, 0x18DCF0u)) {
        return;
    }
    ctx->pc = 0x18DCF0u;
label_18dcf0:
    // 0x18dcf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18dcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dcf4:
    // 0x18dcf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcf8:
    // 0x18dcf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18dcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18dcfc:
    // 0x18dcfc: 0xc081b9a  jal         func_206E68
label_18dd00:
    if (ctx->pc == 0x18DD00u) {
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD04u;
        goto label_18dd04;
    }
    ctx->pc = 0x18DCFCu;
    SET_GPR_U32(ctx, 31, 0x18DD04u);
    ctx->pc = 0x18DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCFCu;
    // 0x18dd00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18DCFCu, 0x18DD04u)) {
        return;
    }
    ctx->pc = 0x18DD04u;
label_18dd04:
    // 0x18dd04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18dd08:
    // 0x18dd08: 0xc065c40  jal         func_197100
label_18dd0c:
    if (ctx->pc == 0x18DD0Cu) {
        ctx->pc = 0x18DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD08u;
        // 0x18dd0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD10u;
        goto label_18dd10;
    }
    ctx->pc = 0x18DD08u;
    SET_GPR_U32(ctx, 31, 0x18DD10u);
    ctx->pc = 0x18DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD08u;
    // 0x18dd0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18DD08u, 0x18DD10u)) {
        return;
    }
    ctx->pc = 0x18DD10u;
label_18dd10:
    // 0x18dd10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_18dd14:
    // 0x18dd14: 0xc080858  jal         func_202160
label_18dd18:
    if (ctx->pc == 0x18DD18u) {
        ctx->pc = 0x18DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD14u;
        // 0x18dd18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD1Cu;
        goto label_18dd1c;
    }
    ctx->pc = 0x18DD14u;
    SET_GPR_U32(ctx, 31, 0x18DD1Cu);
    ctx->pc = 0x18DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD14u;
    // 0x18dd18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18DD14u, 0x18DD1Cu)) {
        return;
    }
    ctx->pc = 0x18DD1Cu;
label_18dd1c:
    // 0x18dd1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18dd1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dd20:
    // 0x18dd20: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x18dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_18dd24:
    // 0x18dd24: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_18dd28:
    // 0x18dd28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18dd2c:
    // 0x18dd2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18dd30:
    // 0x18dd30: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_18dd34:
    // 0x18dd34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18dd38:
    if (ctx->pc == 0x18DD38u) {
        ctx->pc = 0x18DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD34u;
        // 0x18dd38: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD3Cu;
        goto label_18dd3c;
    }
    ctx->pc = 0x18DD34u;
    {
        const bool branch_taken_0x18dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd34) {
            ctx->pc = 0x18DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD34u;
            // 0x18dd38: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD3Cu;
            goto label_18dd3c;
        }
    }
    ctx->pc = 0x18DD3Cu;
label_18dd3c:
    // 0x18dd3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18dd40:
    // 0x18dd40: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_18dd44:
    if (ctx->pc == 0x18DD44u) {
        ctx->pc = 0x18DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD40u;
        // 0x18dd44: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD48u;
        goto label_18dd48;
    }
    ctx->pc = 0x18DD40u;
    {
        const bool branch_taken_0x18dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd40) {
            ctx->pc = 0x18DD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD40u;
            // 0x18dd44: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD48u;
            goto label_18dd48;
        }
    }
    ctx->pc = 0x18DD48u;
label_18dd48:
    // 0x18dd48: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x18dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_18dd4c:
    // 0x18dd4c: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_18dd50:
    // 0x18dd50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18dd54:
    // 0x18dd54: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x18dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_18dd58:
    // 0x18dd58: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_18dd5c:
    if (ctx->pc == 0x18DD5Cu) {
        ctx->pc = 0x18DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD58u;
        // 0x18dd5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD60u;
        goto label_18dd60;
    }
    ctx->pc = 0x18DD58u;
    {
        const bool branch_taken_0x18dd58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD58u;
        // 0x18dd5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd58) {
            ctx->pc = 0x18DD74u;
            goto label_18dd74;
        }
    }
    ctx->pc = 0x18DD60u;
label_18dd60:
    // 0x18dd60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18dd64:
    // 0x18dd64: 0xc065c40  jal         func_197100
label_18dd68:
    if (ctx->pc == 0x18DD68u) {
        ctx->pc = 0x18DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD64u;
        // 0x18dd68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD6Cu;
        goto label_18dd6c;
    }
    ctx->pc = 0x18DD64u;
    SET_GPR_U32(ctx, 31, 0x18DD6Cu);
    ctx->pc = 0x18DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD64u;
    // 0x18dd68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18DD64u, 0x18DD6Cu)) {
        return;
    }
    ctx->pc = 0x18DD6Cu;
label_18dd6c:
    // 0x18dd6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_18dd70:
    if (ctx->pc == 0x18DD70u) {
        ctx->pc = 0x18DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD6Cu;
        // 0x18dd70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD74u;
        goto label_18dd74;
    }
    ctx->pc = 0x18DD6Cu;
    {
        const bool branch_taken_0x18dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD6Cu;
        // 0x18dd70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd6c) {
            ctx->pc = 0x18DD78u;
            goto label_18dd78;
        }
    }
    ctx->pc = 0x18DD74u;
label_18dd74:
    // 0x18dd74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18dd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dd78:
    // 0x18dd78: 0x10000002  b           . + 4 + (0x2 << 2)
label_18dd7c:
    if (ctx->pc == 0x18DD7Cu) {
        ctx->pc = 0x18DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD78u;
        // 0x18dd7c: 0x8e9100b4  lw          $s1, 0xB4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD80u;
        goto label_18dd80;
    }
    ctx->pc = 0x18DD78u;
    {
        const bool branch_taken_0x18dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD78u;
        // 0x18dd7c: 0x8e9100b4  lw          $s1, 0xB4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd78) {
            ctx->pc = 0x18DD84u;
            goto label_18dd84;
        }
    }
    ctx->pc = 0x18DD80u;
label_18dd80:
    // 0x18dd80: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18dd80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18dd84:
    // 0x18dd84: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_18dd88:
    if (ctx->pc == 0x18DD88u) {
        ctx->pc = 0x18DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD84u;
        // 0x18dd88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD8Cu;
        goto label_18dd8c;
    }
    ctx->pc = 0x18DD84u;
    {
        const bool branch_taken_0x18dd84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD84u;
        // 0x18dd88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd84) {
            ctx->pc = 0x18DDB4u;
            goto label_18ddb4;
        }
    }
    ctx->pc = 0x18DD8Cu;
label_18dd8c:
    // 0x18dd8c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18dd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18dd90:
    // 0x18dd90: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18dd94:
    // 0x18dd94: 0x5642fffb  bnel        $s2, $v0, . + 4 + (-0x5 << 2)
label_18dd98:
    if (ctx->pc == 0x18DD98u) {
        ctx->pc = 0x18DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD94u;
        // 0x18dd98: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD9Cu;
        goto label_18dd9c;
    }
    ctx->pc = 0x18DD94u;
    {
        const bool branch_taken_0x18dd94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dd94) {
            ctx->pc = 0x18DD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD94u;
            // 0x18dd98: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dd84;
        }
    }
    ctx->pc = 0x18DD9Cu;
label_18dd9c:
    // 0x18dd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dda0:
    // 0x18dda0: 0xc065c68  jal         func_1971A0
label_18dda4:
    if (ctx->pc == 0x18DDA4u) {
        ctx->pc = 0x18DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA0u;
        // 0x18dda4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDA8u;
        goto label_18dda8;
    }
    ctx->pc = 0x18DDA0u;
    SET_GPR_U32(ctx, 31, 0x18DDA8u);
    ctx->pc = 0x18DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDA0u;
    // 0x18dda4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18DDA0u, 0x18DDA8u)) {
        return;
    }
    ctx->pc = 0x18DDA8u;
label_18dda8:
    // 0x18dda8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_18ddac:
    if (ctx->pc == 0x18DDACu) {
        ctx->pc = 0x18DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA8u;
        // 0x18ddac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDB0u;
        goto label_18ddb0;
    }
    ctx->pc = 0x18DDA8u;
    {
        const bool branch_taken_0x18dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA8u;
        // 0x18ddac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dda8) {
            ctx->pc = 0x18DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dd80;
        }
    }
    ctx->pc = 0x18DDB0u;
label_18ddb0:
    // 0x18ddb0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x18ddb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ddb4:
    // 0x18ddb4: 0xc0635c0  jal         func_18D700
label_18ddb8:
    if (ctx->pc == 0x18DDB8u) {
        ctx->pc = 0x18DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDB4u;
        // 0x18ddb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDBCu;
        goto label_18ddbc;
    }
    ctx->pc = 0x18DDB4u;
    SET_GPR_U32(ctx, 31, 0x18DDBCu);
    ctx->pc = 0x18DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDB4u;
    // 0x18ddb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D700u, 0x18DDB4u, 0x18DDBCu)) {
        return;
    }
    ctx->pc = 0x18DDBCu;
label_18ddbc:
    // 0x18ddbc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x18ddbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18ddc0:
    // 0x18ddc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18ddc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18ddc4:
    // 0x18ddc4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18ddc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18ddc8:
    // 0x18ddc8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18ddc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18ddcc:
    // 0x18ddcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18ddccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18ddd0:
    // 0x18ddd0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18ddd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18ddd4:
    // 0x18ddd4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18ddd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ddd8:
    // 0x18ddd8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x18ddd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18dddc:
    // 0x18dddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18dde0:
    // 0x18dde0: 0x3e00008  jr          $ra
label_18dde4:
    if (ctx->pc == 0x18DDE4u) {
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE0u;
        // 0x18dde4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDE8u;
        goto label_fallthrough_0x18dde0;
    }
    ctx->pc = 0x18DDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE0u;
        // 0x18dde4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18dde0:
    ctx->pc = 0x18DDE8u;
}
