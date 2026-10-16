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

// Function: sub_0024DDB0
// Address: 0x24ddb0 - 0x24de20
void sub_0024DDB0_0x24ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DDB0_0x24ddb0");
#endif

    switch (ctx->pc) {
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24ddb4u: goto label_24ddb4;
        case 0x24ddb8u: goto label_24ddb8;
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24ddc0u: goto label_24ddc0;
        case 0x24ddc4u: goto label_24ddc4;
        case 0x24ddc8u: goto label_24ddc8;
        case 0x24ddccu: goto label_24ddcc;
        case 0x24ddd0u: goto label_24ddd0;
        case 0x24ddd4u: goto label_24ddd4;
        case 0x24ddd8u: goto label_24ddd8;
        case 0x24dddcu: goto label_24dddc;
        case 0x24dde0u: goto label_24dde0;
        case 0x24dde4u: goto label_24dde4;
        case 0x24dde8u: goto label_24dde8;
        case 0x24ddecu: goto label_24ddec;
        case 0x24ddf0u: goto label_24ddf0;
        case 0x24ddf4u: goto label_24ddf4;
        case 0x24ddf8u: goto label_24ddf8;
        case 0x24ddfcu: goto label_24ddfc;
        case 0x24de00u: goto label_24de00;
        case 0x24de04u: goto label_24de04;
        case 0x24de08u: goto label_24de08;
        case 0x24de0cu: goto label_24de0c;
        case 0x24de10u: goto label_24de10;
        case 0x24de14u: goto label_24de14;
        case 0x24de18u: goto label_24de18;
        case 0x24de1cu: goto label_24de1c;
        default: break;
    }

    ctx->pc = 0x24ddb0u;

label_24ddb0:
    // 0x24ddb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24ddb4:
    // 0x24ddb4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24ddb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24ddb8:
    // 0x24ddb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24ddbc:
    // 0x24ddbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ddc0:
    // 0x24ddc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ddc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24ddc4:
    // 0x24ddc4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24ddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24ddc8:
    // 0x24ddc8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x24ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24ddcc:
    // 0x24ddcc: 0x0  nop
    ctx->pc = 0x24ddccu;
    // NOP
label_24ddd0:
    // 0x24ddd0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_24ddd4:
    if (ctx->pc == 0x24DDD4u) {
        ctx->pc = 0x24DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDD0u;
        // 0x24ddd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDD8u;
        goto label_24ddd8;
    }
    ctx->pc = 0x24DDD0u;
    {
        const bool branch_taken_0x24ddd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDD0u;
        // 0x24ddd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddd0) {
            ctx->pc = 0x24DE10u;
            goto label_24de10;
        }
    }
    ctx->pc = 0x24DDD8u;
label_24ddd8:
    // 0x24ddd8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x24ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_24dddc:
    // 0x24dddc: 0x0  nop
    ctx->pc = 0x24dddcu;
    // NOP
label_24dde0:
    // 0x24dde0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_24dde4:
    if (ctx->pc == 0x24DDE4u) {
        ctx->pc = 0x24DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDE0u;
        // 0x24dde4: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDE8u;
        goto label_24dde8;
    }
    ctx->pc = 0x24DDE0u;
    {
        const bool branch_taken_0x24dde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24dde0) {
            ctx->pc = 0x24DDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DDE0u;
            // 0x24dde4: 0x8ca50030  lw          $a1, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ddd0;
        }
    }
    ctx->pc = 0x24DDE8u;
label_24dde8:
    // 0x24dde8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_24ddec:
    if (ctx->pc == 0x24DDECu) {
        ctx->pc = 0x24DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDE8u;
        // 0x24ddec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDF0u;
        goto label_24ddf0;
    }
    ctx->pc = 0x24DDE8u;
    {
        const bool branch_taken_0x24dde8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDE8u;
        // 0x24ddec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dde8) {
            ctx->pc = 0x24DE10u;
            goto label_24de10;
        }
    }
    ctx->pc = 0x24DDF0u;
label_24ddf0:
    // 0x24ddf0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x24ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_24ddf4:
    // 0x24ddf4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_24ddf8:
    if (ctx->pc == 0x24DDF8u) {
        ctx->pc = 0x24DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF4u;
        // 0x24ddf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDFCu;
        goto label_24ddfc;
    }
    ctx->pc = 0x24DDF4u;
    {
        const bool branch_taken_0x24ddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ddf4) {
            ctx->pc = 0x24DDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DDF4u;
            // 0x24ddf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DE10u;
            goto label_24de10;
        }
    }
    ctx->pc = 0x24DDFCu;
label_24ddfc:
    // 0x24ddfc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x24ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24de00:
    // 0x24de00: 0x40f809  jalr        $v0
label_24de04:
    if (ctx->pc == 0x24DE04u) {
        ctx->pc = 0x24DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE00u;
        // 0x24de04: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE08u;
        goto label_24de08;
    }
    ctx->pc = 0x24DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DE08u);
        ctx->pc = 0x24DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE00u;
        // 0x24de04: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE00u, 0x24DE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DE08u;
label_24de08:
    // 0x24de08: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x24de08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_24de0c:
    // 0x24de0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24de10:
    // 0x24de10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24de14:
    // 0x24de14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24de14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24de18:
    // 0x24de18: 0x3e00008  jr          $ra
label_24de1c:
    if (ctx->pc == 0x24DE1Cu) {
        ctx->pc = 0x24DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE18u;
        // 0x24de1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE20u;
        goto label_fallthrough_0x24de18;
    }
    ctx->pc = 0x24DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE18u;
        // 0x24de1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24de18:
    ctx->pc = 0x24DE20u;
}
