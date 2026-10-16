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

// Function: sub_0030DB38
// Address: 0x30db38 - 0x30dc38
void sub_0030DB38_0x30db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DB38_0x30db38");
#endif

    switch (ctx->pc) {
        case 0x30db64u: goto label_30db64;
        case 0x30db94u: goto label_30db94;
        case 0x30dbc0u: goto label_30dbc0;
        case 0x30dc08u: goto label_30dc08;
        default: break;
    }

    ctx->pc = 0x30db38u;

    // 0x30db38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30db3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30db40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30db40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30db44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30db44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30db4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30db4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30db54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30db54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30db58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30db58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30db5c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DB5Cu;
    SET_GPR_U32(ctx, 31, 0x30DB64u);
    ctx->pc = 0x30DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB5Cu;
    // 0x30db60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DB5Cu, 0x30DB64u)) {
        return;
    }
    ctx->pc = 0x30DB64u;
label_30db64:
    // 0x30db64: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30DB64u;
    {
        const bool branch_taken_0x30db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB64u;
        // 0x30db68: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db64) {
            ctx->pc = 0x30DBF0u;
            goto label_30dbf0;
        }
    }
    ctx->pc = 0x30DB6Cu;
    // 0x30db6c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30db70: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30db74: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DB74u;
    {
        const bool branch_taken_0x30db74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB74u;
        // 0x30db78: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db74) {
            ctx->pc = 0x30DBF0u;
            goto label_30dbf0;
        }
    }
    ctx->pc = 0x30DB7Cu;
    // 0x30db7c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DB7Cu;
    {
        const bool branch_taken_0x30db7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB7Cu;
        // 0x30db80: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db7c) {
            ctx->pc = 0x30DBF0u;
            goto label_30dbf0;
        }
    }
    ctx->pc = 0x30DB84u;
    // 0x30db84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30db84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30db88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30db8c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DB8Cu;
    SET_GPR_U32(ctx, 31, 0x30DB94u);
    ctx->pc = 0x30DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB8Cu;
    // 0x30db90: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DB8Cu, 0x30DB94u)) {
        return;
    }
    ctx->pc = 0x30DB94u;
label_30db94:
    // 0x30db94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30DB94u;
    {
        const bool branch_taken_0x30db94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB94u;
        // 0x30db98: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db94) {
            ctx->pc = 0x30DBC8u;
            goto label_30dbc8;
        }
    }
    ctx->pc = 0x30DB9Cu;
    // 0x30db9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30dba0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30dba4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30DBA4u;
    {
        const bool branch_taken_0x30dba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBA4u;
        // 0x30dba8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dba4) {
            ctx->pc = 0x30DBC8u;
            goto label_30dbc8;
        }
    }
    ctx->pc = 0x30DBACu;
    // 0x30dbac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DBACu;
    {
        const bool branch_taken_0x30dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBACu;
        // 0x30dbb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbac) {
            ctx->pc = 0x30DBC8u;
            goto label_30dbc8;
        }
    }
    ctx->pc = 0x30DBB4u;
    // 0x30dbb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dbb8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30DBB8u;
    SET_GPR_U32(ctx, 31, 0x30DBC0u);
    ctx->pc = 0x30DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DBB8u;
    // 0x30dbbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30DBB8u, 0x30DBC0u)) {
        return;
    }
    ctx->pc = 0x30DBC0u;
label_30dbc0:
    // 0x30dbc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DBC0u;
    {
        const bool branch_taken_0x30dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dbc0) {
            ctx->pc = 0x30DBD0u;
            goto label_30dbd0;
        }
    }
    ctx->pc = 0x30DBC8u;
label_30dbc8:
    // 0x30dbc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DBC8u;
    {
        const bool branch_taken_0x30dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBC8u;
        // 0x30dbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbc8) {
            ctx->pc = 0x30DBE8u;
            goto label_30dbe8;
        }
    }
    ctx->pc = 0x30DBD0u;
label_30dbd0:
    // 0x30dbd0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DBD0u;
    {
        const bool branch_taken_0x30dbd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBD0u;
        // 0x30dbd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbd0) {
            ctx->pc = 0x30DBE8u;
            goto label_30dbe8;
        }
    }
    ctx->pc = 0x30DBD8u;
    // 0x30dbd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30dbdc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30dbe0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30dbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dbe8:
    // 0x30dbe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DBE8u;
    {
        const bool branch_taken_0x30dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBE8u;
        // 0x30dbec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbe8) {
            ctx->pc = 0x30DBF8u;
            goto label_30dbf8;
        }
    }
    ctx->pc = 0x30DBF0u;
label_30dbf0:
    // 0x30dbf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30DBF0u;
    {
        const bool branch_taken_0x30dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBF0u;
        // 0x30dbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbf0) {
            ctx->pc = 0x30DC20u;
            goto label_30dc20;
        }
    }
    ctx->pc = 0x30DBF8u;
label_30dbf8:
    // 0x30dbf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30dbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30dbfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30dbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dc00: 0xc0aa2ce  jal         func_2A8B38
    ctx->pc = 0x30DC00u;
    SET_GPR_U32(ctx, 31, 0x30DC08u);
    ctx->pc = 0x30DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC00u;
    // 0x30dc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x30DC00u, 0x30DC08u)) {
        return;
    }
    ctx->pc = 0x30DC08u;
label_30dc08:
    // 0x30dc08: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DC08u;
    {
        const bool branch_taken_0x30dc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC08u;
        // 0x30dc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc08) {
            ctx->pc = 0x30DC20u;
            goto label_30dc20;
        }
    }
    ctx->pc = 0x30DC10u;
    // 0x30dc10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30dc14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30dc18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30dc1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dc20:
    // 0x30dc20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30dc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dc24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30dc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dc28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30dc28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x30DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC30u;
        // 0x30dc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DC38u;
}
