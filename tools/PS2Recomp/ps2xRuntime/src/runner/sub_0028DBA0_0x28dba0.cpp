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

// Function: sub_0028DBA0
// Address: 0x28dba0 - 0x28dc20
void sub_0028DBA0_0x28dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DBA0_0x28dba0");
#endif

    switch (ctx->pc) {
        case 0x28dbbcu: goto label_28dbbc;
        case 0x28dc04u: goto label_28dc04;
        default: break;
    }

    ctx->pc = 0x28dba0u;

    // 0x28dba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dba4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28dba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dba8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28dbac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28dbb4: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x28dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x28dbb8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x28dbb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dbbc:
    // 0x28dbbc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x28dbbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dbc0: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x28dbc0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28dbc4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x28dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x28dbc8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x28dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x28dbcc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28dbd0: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28DBD0u;
    {
        const bool branch_taken_0x28dbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBD0u;
        // 0x28dbd4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbd0) {
            ctx->pc = 0x28DBBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dbbc;
        }
    }
    ctx->pc = 0x28DBD8u;
    // 0x28dbd8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28dbd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dbdc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x28dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x28dbe0: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x28dbe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28dbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28dbec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x28dbf0: 0x8ca400b8  lw          $a0, 0xB8($a1)
    ctx->pc = 0x28dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x28dbf4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DBF4u;
    {
        const bool branch_taken_0x28dbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBF4u;
        // 0x28dbf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbf4) {
            ctx->pc = 0x28DC0Cu;
            goto label_28dc0c;
        }
    }
    ctx->pc = 0x28DBFCu;
    // 0x28dbfc: 0xc095556  jal         func_255558
    ctx->pc = 0x28DBFCu;
    SET_GPR_U32(ctx, 31, 0x28DC04u);
    ctx->pc = 0x255558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255558u, 0x28DBFCu, 0x28DC04u)) {
        return;
    }
    ctx->pc = 0x28DC04u;
label_28dc04:
    // 0x28dc04: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x28dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x28dc08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28dc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dc0c:
    // 0x28dc0c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x28dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x28dc10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28dc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28dc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dc18: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC18u;
        // 0x28dc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC20u;
}
