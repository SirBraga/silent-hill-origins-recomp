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

// Function: sub_001CEDB0
// Address: 0x1cedb0 - 0x1cee28
void sub_001CEDB0_0x1cedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEDB0_0x1cedb0");
#endif

    switch (ctx->pc) {
        case 0x1cedb0u: goto label_1cedb0;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedb8u: goto label_1cedb8;
        case 0x1cedbcu: goto label_1cedbc;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc4u: goto label_1cedc4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedccu: goto label_1cedcc;
        case 0x1cedd0u: goto label_1cedd0;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1ceddcu: goto label_1ceddc;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cede8u: goto label_1cede8;
        case 0x1cedecu: goto label_1cedec;
        case 0x1cedf0u: goto label_1cedf0;
        case 0x1cedf4u: goto label_1cedf4;
        case 0x1cedf8u: goto label_1cedf8;
        case 0x1cedfcu: goto label_1cedfc;
        case 0x1cee00u: goto label_1cee00;
        case 0x1cee04u: goto label_1cee04;
        case 0x1cee08u: goto label_1cee08;
        case 0x1cee0cu: goto label_1cee0c;
        case 0x1cee10u: goto label_1cee10;
        case 0x1cee14u: goto label_1cee14;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee20u: goto label_1cee20;
        case 0x1cee24u: goto label_1cee24;
        default: break;
    }

    ctx->pc = 0x1cedb0u;

label_1cedb0:
    // 0x1cedb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cedb4:
    // 0x1cedb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cedb8:
    // 0x1cedb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cedbc:
    // 0x1cedbc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cedbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cedc0:
    // 0x1cedc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cedc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1cedc4:
    // 0x1cedc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cedc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cedc8:
    // 0x1cedc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cedc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cedcc:
    // 0x1cedcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cedccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cedd0:
    // 0x1cedd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cedd4:
    // 0x1cedd4: 0x8e270264  lw          $a3, 0x264($s1)
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cedd8:
    // 0x1cedd8: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x1cedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_1ceddc:
    // 0x1ceddc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cede0:
    // 0x1cede0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cede4:
    // 0x1cede4: 0x60f809  jalr        $v1
label_1cede8:
    if (ctx->pc == 0x1CEDE8u) {
        ctx->pc = 0x1CEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDE4u;
        // 0x1cede8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDECu;
        goto label_1cedec;
    }
    ctx->pc = 0x1CEDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEDECu);
        ctx->pc = 0x1CEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDE4u;
        // 0x1cede8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDE4u, 0x1CEDECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEDECu;
label_1cedec:
    // 0x1cedec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1cedecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1cedf0:
    // 0x1cedf0: 0x2622026c  addiu       $v0, $s1, 0x26C
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
label_1cedf4:
    // 0x1cedf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1cedf8:
    // 0x1cedf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cedfc:
    // 0x1cedfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cee00:
    // 0x1cee00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cee00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cee04:
    // 0x1cee04: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x1cee04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
label_1cee08:
    // 0x1cee08: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1cee08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_1cee0c:
    // 0x1cee0c: 0xae240280  sw          $a0, 0x280($s1)
    ctx->pc = 0x1cee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 4));
label_1cee10:
    // 0x1cee10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cee10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cee14:
    // 0x1cee14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cee14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cee18:
    // 0x1cee18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cee18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cee1c:
    // 0x1cee1c: 0x3e00008  jr          $ra
label_1cee20:
    if (ctx->pc == 0x1CEE20u) {
        ctx->pc = 0x1CEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE1Cu;
        // 0x1cee20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE24u;
        goto label_1cee24;
    }
    ctx->pc = 0x1CEE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE1Cu;
        // 0x1cee20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE24u;
label_1cee24:
    // 0x1cee24: 0x0  nop
    ctx->pc = 0x1cee24u;
    // NOP
    ctx->pc = 0x1cee28u;
}
