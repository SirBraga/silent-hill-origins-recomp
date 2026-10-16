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

// Function: sub_0027DB08
// Address: 0x27db08 - 0x27dbf0
void sub_0027DB08_0x27db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DB08_0x27db08");
#endif

    switch (ctx->pc) {
        case 0x27db08u: goto label_27db08;
        case 0x27db0cu: goto label_27db0c;
        case 0x27db10u: goto label_27db10;
        case 0x27db14u: goto label_27db14;
        case 0x27db18u: goto label_27db18;
        case 0x27db1cu: goto label_27db1c;
        case 0x27db20u: goto label_27db20;
        case 0x27db24u: goto label_27db24;
        case 0x27db28u: goto label_27db28;
        case 0x27db2cu: goto label_27db2c;
        case 0x27db30u: goto label_27db30;
        case 0x27db34u: goto label_27db34;
        case 0x27db38u: goto label_27db38;
        case 0x27db3cu: goto label_27db3c;
        case 0x27db40u: goto label_27db40;
        case 0x27db44u: goto label_27db44;
        case 0x27db48u: goto label_27db48;
        case 0x27db4cu: goto label_27db4c;
        case 0x27db50u: goto label_27db50;
        case 0x27db54u: goto label_27db54;
        case 0x27db58u: goto label_27db58;
        case 0x27db5cu: goto label_27db5c;
        case 0x27db60u: goto label_27db60;
        case 0x27db64u: goto label_27db64;
        case 0x27db68u: goto label_27db68;
        case 0x27db6cu: goto label_27db6c;
        case 0x27db70u: goto label_27db70;
        case 0x27db74u: goto label_27db74;
        case 0x27db78u: goto label_27db78;
        case 0x27db7cu: goto label_27db7c;
        case 0x27db80u: goto label_27db80;
        case 0x27db84u: goto label_27db84;
        case 0x27db88u: goto label_27db88;
        case 0x27db8cu: goto label_27db8c;
        case 0x27db90u: goto label_27db90;
        case 0x27db94u: goto label_27db94;
        case 0x27db98u: goto label_27db98;
        case 0x27db9cu: goto label_27db9c;
        case 0x27dba0u: goto label_27dba0;
        case 0x27dba4u: goto label_27dba4;
        case 0x27dba8u: goto label_27dba8;
        case 0x27dbacu: goto label_27dbac;
        case 0x27dbb0u: goto label_27dbb0;
        case 0x27dbb4u: goto label_27dbb4;
        case 0x27dbb8u: goto label_27dbb8;
        case 0x27dbbcu: goto label_27dbbc;
        case 0x27dbc0u: goto label_27dbc0;
        case 0x27dbc4u: goto label_27dbc4;
        case 0x27dbc8u: goto label_27dbc8;
        case 0x27dbccu: goto label_27dbcc;
        case 0x27dbd0u: goto label_27dbd0;
        case 0x27dbd4u: goto label_27dbd4;
        case 0x27dbd8u: goto label_27dbd8;
        case 0x27dbdcu: goto label_27dbdc;
        case 0x27dbe0u: goto label_27dbe0;
        case 0x27dbe4u: goto label_27dbe4;
        case 0x27dbe8u: goto label_27dbe8;
        case 0x27dbecu: goto label_27dbec;
        default: break;
    }

    ctx->pc = 0x27db08u;

label_27db08:
    // 0x27db08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27db08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27db0c:
    // 0x27db0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x27db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_27db10:
    // 0x27db10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27db14:
    // 0x27db14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27db14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27db18:
    // 0x27db18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x27db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_27db1c:
    // 0x27db1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27db1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27db20:
    // 0x27db20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27db20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_27db24:
    // 0x27db24: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x27db24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
label_27db28:
    // 0x27db28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_27db2c:
    // 0x27db2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27db30:
    // 0x27db30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27db34:
    // 0x27db34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_27db38:
    if (ctx->pc == 0x27DB38u) {
        ctx->pc = 0x27DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB34u;
        // 0x27db38: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DB3Cu;
        goto label_27db3c;
    }
    ctx->pc = 0x27DB34u;
    {
        const bool branch_taken_0x27db34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB34u;
        // 0x27db38: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db34) {
            ctx->pc = 0x27DB74u;
            goto label_27db74;
        }
    }
    ctx->pc = 0x27DB3Cu;
label_27db3c:
    // 0x27db3c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_27db40:
    // 0x27db40: 0x26930fc8  addiu       $s3, $s4, 0xFC8
    ctx->pc = 0x27db40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_27db44:
    // 0x27db44: 0x0  nop
    ctx->pc = 0x27db44u;
    // NOP
label_27db48:
    // 0x27db48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27db48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27db4c:
    // 0x27db4c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_27db50:
    if (ctx->pc == 0x27DB50u) {
        ctx->pc = 0x27DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB4Cu;
        // 0x27db50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DB54u;
        goto label_27db54;
    }
    ctx->pc = 0x27DB4Cu;
    {
        const bool branch_taken_0x27db4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db4c) {
            ctx->pc = 0x27DB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DB4Cu;
            // 0x27db50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DB64u;
            goto label_27db64;
        }
    }
    ctx->pc = 0x27DB54u;
label_27db54:
    // 0x27db54: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x27db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_27db58:
    // 0x27db58: 0x40f809  jalr        $v0
label_27db5c:
    if (ctx->pc == 0x27DB5Cu) {
        ctx->pc = 0x27DB60u;
        goto label_27db60;
    }
    ctx->pc = 0x27DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DB60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB58u, 0x27DB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DB60u;
label_27db60:
    // 0x27db60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27db64:
    // 0x27db64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27db64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27db68:
    // 0x27db68: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x27db68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27db6c:
    // 0x27db6c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27db70:
    if (ctx->pc == 0x27DB70u) {
        ctx->pc = 0x27DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB6Cu;
        // 0x27db70: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DB74u;
        goto label_27db74;
    }
    ctx->pc = 0x27DB6Cu;
    {
        const bool branch_taken_0x27db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB6Cu;
        // 0x27db70: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db6c) {
            ctx->pc = 0x27DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db48;
        }
    }
    ctx->pc = 0x27DB74u;
label_27db74:
    // 0x27db74: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x27db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_27db78:
    // 0x27db78: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x27db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_27db7c:
    // 0x27db7c: 0x40f809  jalr        $v0
label_27db80:
    if (ctx->pc == 0x27DB80u) {
        ctx->pc = 0x27DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB7Cu;
        // 0x27db80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DB84u;
        goto label_27db84;
    }
    ctx->pc = 0x27DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DB84u);
        ctx->pc = 0x27DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB7Cu;
        // 0x27db80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB7Cu, 0x27DB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DB84u;
label_27db84:
    // 0x27db84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27db84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27db88:
    // 0x27db88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27db88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27db8c:
    // 0x27db8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x27db8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27db90:
    // 0x27db90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27db90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27db94:
    // 0x27db94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x27db94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27db98:
    // 0x27db98: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x27db98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27db9c:
    // 0x27db9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27db9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27dba0:
    // 0x27dba0: 0x3e00008  jr          $ra
label_27dba4:
    if (ctx->pc == 0x27DBA4u) {
        ctx->pc = 0x27DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBA0u;
        // 0x27dba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DBA8u;
        goto label_27dba8;
    }
    ctx->pc = 0x27DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBA0u;
        // 0x27dba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DBA8u;
label_27dba8:
    // 0x27dba8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27dba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27dbac:
    // 0x27dbac: 0x0  nop
    ctx->pc = 0x27dbacu;
    // NOP
label_27dbb0:
    // 0x27dbb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27dbb4:
    // 0x27dbb4: 0x0  nop
    ctx->pc = 0x27dbb4u;
    // NOP
label_27dbb8:
    // 0x27dbb8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x27dbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_27dbbc:
    // 0x27dbbc: 0x0  nop
    ctx->pc = 0x27dbbcu;
    // NOP
label_27dbc0:
    // 0x27dbc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27dbc4:
    // 0x27dbc4: 0x0  nop
    ctx->pc = 0x27dbc4u;
    // NOP
label_27dbc8:
    // 0x27dbc8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x27dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_27dbcc:
    // 0x27dbcc: 0x0  nop
    ctx->pc = 0x27dbccu;
    // NOP
label_27dbd0:
    // 0x27dbd0: 0xe46e0008  swc1        $f14, 0x8($v1)
    ctx->pc = 0x27dbd0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27dbd4:
    // 0x27dbd4: 0x0  nop
    ctx->pc = 0x27dbd4u;
    // NOP
label_27dbd8:
    // 0x27dbd8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dbdc:
    // 0x27dbdc: 0x0  nop
    ctx->pc = 0x27dbdcu;
    // NOP
label_27dbe0:
    // 0x27dbe0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x27dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dbe4:
    // 0x27dbe4: 0x0  nop
    ctx->pc = 0x27dbe4u;
    // NOP
label_27dbe8:
    // 0x27dbe8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dbec:
    // 0x27dbec: 0x0  nop
    ctx->pc = 0x27dbecu;
    // NOP
    ctx->pc = 0x27dbf0u;
}
