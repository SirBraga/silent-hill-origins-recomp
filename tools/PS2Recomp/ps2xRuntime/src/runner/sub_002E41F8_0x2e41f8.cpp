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

// Function: sub_002E41F8
// Address: 0x2e41f8 - 0x2e4258
void sub_002E41F8_0x2e41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E41F8_0x2e41f8");
#endif

    switch (ctx->pc) {
        case 0x2e421cu: goto label_2e421c;
        case 0x2e423cu: goto label_2e423c;
        case 0x2e424cu: goto label_2e424c;
        default: break;
    }

    ctx->pc = 0x2e41f8u;

    // 0x2e41f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e41f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e41fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e41fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4200: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e4200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e4204: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2e4204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2e4208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4208u;
    {
        const bool branch_taken_0x2e4208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4208u;
        // 0x2e420c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4208) {
            ctx->pc = 0x2E4224u;
            goto label_2e4224;
        }
    }
    ctx->pc = 0x2E4210u;
    // 0x2e4210: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e4210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e4214: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E4214u;
    SET_GPR_U32(ctx, 31, 0x2E421Cu);
    ctx->pc = 0x2E4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4214u;
    // 0x2e4218: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E4214u, 0x2E421Cu)) {
        return;
    }
    ctx->pc = 0x2E421Cu;
label_2e421c:
    // 0x2e421c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E421Cu;
    {
        const bool branch_taken_0x2e421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E421Cu;
        // 0x2e4220: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e421c) {
            ctx->pc = 0x2E4250u;
            goto label_2e4250;
        }
    }
    ctx->pc = 0x2E4224u;
label_2e4224:
    // 0x2e4224: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2e4224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2e4228: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4228u;
    {
        const bool branch_taken_0x2e4228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4228) {
            ctx->pc = 0x2E422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4228u;
            // 0x2e422c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4244u;
            goto label_2e4244;
        }
    }
    ctx->pc = 0x2E4230u;
    // 0x2e4230: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e4230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e4234: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E4234u;
    SET_GPR_U32(ctx, 31, 0x2E423Cu);
    ctx->pc = 0x2E4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4234u;
    // 0x2e4238: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E4234u, 0x2E423Cu)) {
        return;
    }
    ctx->pc = 0x2E423Cu;
label_2e423c:
    // 0x2e423c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E423Cu;
    {
        const bool branch_taken_0x2e423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E423Cu;
        // 0x2e4240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e423c) {
            ctx->pc = 0x2E4250u;
            goto label_2e4250;
        }
    }
    ctx->pc = 0x2E4244u;
label_2e4244:
    // 0x2e4244: 0xc0b84bc  jal         func_2E12F0
    ctx->pc = 0x2E4244u;
    SET_GPR_U32(ctx, 31, 0x2E424Cu);
    ctx->pc = 0x2E4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4244u;
    // 0x2e4248: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E12F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E12F0u, 0x2E4244u, 0x2E424Cu)) {
        return;
    }
    ctx->pc = 0x2E424Cu;
label_2e424c:
    // 0x2e424c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4250:
    // 0x2e4250: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4250u;
        // 0x2e4254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4258u;
}
