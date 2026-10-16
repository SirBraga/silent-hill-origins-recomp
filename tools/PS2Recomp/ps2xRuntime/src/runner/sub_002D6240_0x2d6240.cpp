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

// Function: sub_002D6240
// Address: 0x2d6240 - 0x2d62a0
void sub_002D6240_0x2d6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6240_0x2d6240");
#endif

    switch (ctx->pc) {
        case 0x2d628cu: goto label_2d628c;
        default: break;
    }

    ctx->pc = 0x2d6240u;

    // 0x2d6240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d6248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d624c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2d624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d6250: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2d6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2d6254: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d6258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6258u;
    {
        const bool branch_taken_0x2d6258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6258u;
        // 0x2d625c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6258) {
            ctx->pc = 0x2D6268u;
            goto label_2d6268;
        }
    }
    ctx->pc = 0x2D6260u;
    // 0x2d6260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D6260u;
    {
        const bool branch_taken_0x2d6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6260u;
        // 0x2d6264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6260) {
            ctx->pc = 0x2D6290u;
            goto label_2d6290;
        }
    }
    ctx->pc = 0x2D6268u;
label_2d6268:
    // 0x2d6268: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2d6268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d626c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d626cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d6270: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x2d6270u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6274: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6274u;
    {
        const bool branch_taken_0x2d6274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6274u;
        // 0x2d6278: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6274) {
            ctx->pc = 0x2D628Cu;
            goto label_2d628c;
        }
    }
    ctx->pc = 0x2D627Cu;
    // 0x2d627c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d627cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6284: 0xc0acd9e  jal         func_2B3678
    ctx->pc = 0x2D6284u;
    SET_GPR_U32(ctx, 31, 0x2D628Cu);
    ctx->pc = 0x2D6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6284u;
    // 0x2d6288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3678u, 0x2D6284u, 0x2D628Cu)) {
        return;
    }
    ctx->pc = 0x2D628Cu;
label_2d628c:
    // 0x2d628c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d628cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6290:
    // 0x2d6290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6298: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6298u;
        // 0x2d629c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D62A0u;
}
