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

// Function: sub_001F4210
// Address: 0x1f4210 - 0x1f4258
void sub_001F4210_0x1f4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4210_0x1f4210");
#endif

    switch (ctx->pc) {
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        default: break;
    }

    ctx->pc = 0x1f4210u;

label_1f4210:
    // 0x1f4210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4214:
    // 0x1f4214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f4218:
    // 0x1f4218: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1f4218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1f421c:
    // 0x1f421c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f4220:
    // 0x1f4220: 0x8e06eaf8  lw          $a2, -0x1508($s0)
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961912)));
label_1f4224:
    // 0x1f4224: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1f4228:
    if (ctx->pc == 0x1F4228u) {
        ctx->pc = 0x1F4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4224u;
        // 0x1f4228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F422Cu;
        goto label_1f422c;
    }
    ctx->pc = 0x1F4224u;
    {
        const bool branch_taken_0x1f4224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4224u;
        // 0x1f4228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4224) {
            ctx->pc = 0x1F4240u;
            goto label_1f4240;
        }
    }
    ctx->pc = 0x1F422Cu;
label_1f422c:
    // 0x1f422c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f4230:
    // 0x1f4230: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4234:
    // 0x1f4234: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4238:
    // 0x1f4238: 0x60f809  jalr        $v1
label_1f423c:
    if (ctx->pc == 0x1F423Cu) {
        ctx->pc = 0x1F423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4238u;
        // 0x1f423c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4240u;
        goto label_1f4240;
    }
    ctx->pc = 0x1F4238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4240u);
        ctx->pc = 0x1F423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4238u;
        // 0x1f423c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4238u, 0x1F4240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4240u;
label_1f4240:
    // 0x1f4240: 0xae00eaf8  sw          $zero, -0x1508($s0)
    ctx->pc = 0x1f4240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961912), GPR_U32(ctx, 0));
label_1f4244:
    // 0x1f4244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f4244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4248:
    // 0x1f4248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f424c:
    // 0x1f424c: 0x3e00008  jr          $ra
label_1f4250:
    if (ctx->pc == 0x1F4250u) {
        ctx->pc = 0x1F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F424Cu;
        // 0x1f4250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4254u;
        goto label_1f4254;
    }
    ctx->pc = 0x1F424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F424Cu;
        // 0x1f4250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F424Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4254u;
label_1f4254:
    // 0x1f4254: 0x0  nop
    ctx->pc = 0x1f4254u;
    // NOP
    ctx->pc = 0x1f4258u;
}
