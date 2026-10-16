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

// Function: sub_0020DB38
// Address: 0x20db38 - 0x20dc50
void sub_0020DB38_0x20db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB38_0x20db38");
#endif

    switch (ctx->pc) {
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc40u: goto label_20dc40;
        default: break;
    }

    ctx->pc = 0x20db38u;

    // 0x20db38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20db38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20db3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20db40: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20db44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db48: 0x8d460014  lw          $a2, 0x14($t2)
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x20db4c: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x20DB4Cu;
    {
        const bool branch_taken_0x20db4c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x20DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB4Cu;
        // 0x20db50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db4c) {
            ctx->pc = 0x20DB74u;
            goto label_20db74;
        }
    }
    ctx->pc = 0x20DB54u;
    // 0x20db54: 0x8d42007c  lw          $v0, 0x7C($t2)
    ctx->pc = 0x20db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 124)));
    // 0x20db58: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20db58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20db5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DB5Cu;
    {
        const bool branch_taken_0x20db5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db5c) {
            ctx->pc = 0x20DB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB5Cu;
            // 0x20db60: 0x8d470080  lw          $a3, 0x80($t2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB78u;
            goto label_20db78;
        }
    }
    ctx->pc = 0x20DB64u;
    // 0x20db64: 0x8d430078  lw          $v1, 0x78($t2)
    ctx->pc = 0x20db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x20db68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20db68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20db6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20DB6Cu;
    {
        const bool branch_taken_0x20db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB6Cu;
        // 0x20db70: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db6c) {
            ctx->pc = 0x20DBA8u;
            goto label_20dba8;
        }
    }
    ctx->pc = 0x20DB74u;
label_20db74:
    // 0x20db74: 0x8d470080  lw          $a3, 0x80($t2)
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
label_20db78:
    // 0x20db78: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x20DB78u;
    {
        const bool branch_taken_0x20db78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db78) {
            ctx->pc = 0x20DBACu;
            goto label_20dbac;
        }
    }
    ctx->pc = 0x20DB80u;
    // 0x20db80: 0x8d430084  lw          $v1, 0x84($t2)
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x20db84: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x20db84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20db88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DB88u;
    {
        const bool branch_taken_0x20db88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db88) {
            ctx->pc = 0x20DBACu;
            goto label_20dbac;
        }
    }
    ctx->pc = 0x20DB90u;
    // 0x20db90: 0x8d420088  lw          $v0, 0x88($t2)
    ctx->pc = 0x20db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x20db94: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20db94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20db98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DB98u;
    {
        const bool branch_taken_0x20db98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB98u;
        // 0x20db9c: 0xc31023  subu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db98) {
            ctx->pc = 0x20DBACu;
            goto label_20dbac;
        }
    }
    ctx->pc = 0x20DBA0u;
    // 0x20dba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20dba4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20dba8:
    // 0x20dba8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20dbac:
    // 0x20dbac: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DBACu;
    {
        const bool branch_taken_0x20dbac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dbac) {
            ctx->pc = 0x20DBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DBACu;
            // 0x20dbb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBC4u;
            goto label_20dbc4;
        }
    }
    ctx->pc = 0x20DBB4u;
    // 0x20dbb4: 0xad460018  sw          $a2, 0x18($t2)
    ctx->pc = 0x20dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 6));
    // 0x20dbb8: 0x8d420078  lw          $v0, 0x78($t2)
    ctx->pc = 0x20dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x20dbbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dbc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20dbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dbc4:
    // 0x20dbc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20dbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbc8: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x20dbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x20dbcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20dbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dbd0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dbd4: 0x0  nop
    ctx->pc = 0x20dbd4u;
    // NOP
label_20dbd8:
    // 0x20dbd8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20DBD8u;
    {
        const bool branch_taken_0x20dbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBD8u;
        // 0x20dbdc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbd8) {
            ctx->pc = 0x20DC00u;
            goto label_20dc00;
        }
    }
    ctx->pc = 0x20DBE0u;
    // 0x20dbe0: 0x0  nop
    ctx->pc = 0x20dbe0u;
    // NOP
    // 0x20dbe4: 0x0  nop
    ctx->pc = 0x20dbe4u;
    // NOP
    // 0x20dbe8: 0x5467fffb  bnel        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20DBE8u;
    {
        const bool branch_taken_0x20dbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x20dbe8) {
            ctx->pc = 0x20DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DBE8u;
            // 0x20dbec: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dbd8;
        }
    }
    ctx->pc = 0x20DBF0u;
    // 0x20dbf0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20dbf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dbf4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x20dbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbf8: 0x38420073  xori        $v0, $v0, 0x73
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)115);
    // 0x20dbfc: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x20dbfcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_20dc00:
    // 0x20dc00: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DC00u;
    {
        const bool branch_taken_0x20dc00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc00) {
            ctx->pc = 0x20DC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DC00u;
            // 0x20dc04: 0x8d430030  lw          $v1, 0x30($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC18u;
            goto label_20dc18;
        }
    }
    ctx->pc = 0x20DC08u;
    // 0x20dc08: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x20DC08u;
    SET_GPR_U32(ctx, 31, 0x20DC10u);
    ctx->pc = 0x20DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC08u;
    // 0x20dc0c: 0x25460018  addiu       $a2, $t2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x20DC08u, 0x20DC10u)) {
        return;
    }
    ctx->pc = 0x20DC10u;
label_20dc10:
    // 0x20dc10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20DC10u;
    {
        const bool branch_taken_0x20dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC10u;
        // 0x20dc14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc10) {
            ctx->pc = 0x20DC44u;
            goto label_20dc44;
        }
    }
    ctx->pc = 0x20DC18u;
label_20dc18:
    // 0x20dc18: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20dc1c: 0x8d420034  lw          $v0, 0x34($t2)
    ctx->pc = 0x20dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x20dc20: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x20dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x20dc24: 0x8d4b002c  lw          $t3, 0x2C($t2)
    ctx->pc = 0x20dc24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x20dc28: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x20dc2c: 0x8d47001c  lw          $a3, 0x1C($t2)
    ctx->pc = 0x20dc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x20dc30: 0x8d480020  lw          $t0, 0x20($t2)
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x20dc34: 0x8d490024  lw          $t1, 0x24($t2)
    ctx->pc = 0x20dc34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x20dc38: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x20DC38u;
    SET_GPR_U32(ctx, 31, 0x20DC40u);
    ctx->pc = 0x20DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC38u;
    // 0x20dc3c: 0x8d4a0028  lw          $t2, 0x28($t2) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x20DC38u, 0x20DC40u)) {
        return;
    }
    ctx->pc = 0x20DC40u;
label_20dc40:
    // 0x20dc40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20dc44:
    // 0x20dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC44u;
        // 0x20dc48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC4Cu;
    // 0x20dc4c: 0x0  nop
    ctx->pc = 0x20dc4cu;
    // NOP
    ctx->pc = 0x20dc50u;
}
