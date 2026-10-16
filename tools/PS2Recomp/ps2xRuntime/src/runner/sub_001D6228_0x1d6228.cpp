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

// Function: sub_001D6228
// Address: 0x1d6228 - 0x1d62e8
void sub_001D6228_0x1d6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6228_0x1d6228");
#endif

    switch (ctx->pc) {
        case 0x1d6270u: goto label_1d6270;
        case 0x1d6290u: goto label_1d6290;
        default: break;
    }

    ctx->pc = 0x1d6228u;

    // 0x1d6228: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d6228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d622c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d6230: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d6230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d6234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d6234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6238: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d623c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d623cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6240: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d6240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d6244: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d6244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6248: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1d6248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1d624c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d624cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6250: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d6250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d6254: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d6258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d625c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1d625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1d6260: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6260u;
    {
        const bool branch_taken_0x1d6260 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6260u;
        // 0x1d6264: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6260) {
            ctx->pc = 0x1D62B8u;
            goto label_1d62b8;
        }
    }
    ctx->pc = 0x1D6268u;
    // 0x1d6268: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d6268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d626c: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1d626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1d6270:
    // 0x1d6270: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1d6270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d6274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6278: 0x54760009  bnel        $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6278u;
    {
        const bool branch_taken_0x1d6278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x1d6278) {
            ctx->pc = 0x1D627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6278u;
            // 0x1d627c: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D62A0u;
            goto label_1d62a0;
        }
    }
    ctx->pc = 0x1D6280u;
    // 0x1d6280: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6280u;
    {
        const bool branch_taken_0x1d6280 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6280u;
        // 0x1d6284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6280) {
            ctx->pc = 0x1D6298u;
            goto label_1d6298;
        }
    }
    ctx->pc = 0x1D6288u;
    // 0x1d6288: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1D6288u;
    SET_GPR_U32(ctx, 31, 0x1D6290u);
    ctx->pc = 0x1D628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6288u;
    // 0x1d628c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1D6288u, 0x1D6290u)) {
        return;
    }
    ctx->pc = 0x1D6290u;
label_1d6290:
    // 0x1d6290: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6290u;
    {
        const bool branch_taken_0x1d6290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6290) {
            ctx->pc = 0x1D6294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6290u;
            // 0x1d6294: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D62A0u;
            goto label_1d62a0;
        }
    }
    ctx->pc = 0x1D6298u;
label_1d6298:
    // 0x1d6298: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d6298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d629c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1d629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1d62a0:
    // 0x1d62a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d62a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d62a4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1d62a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d62a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D62A8u;
    {
        const bool branch_taken_0x1d62a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62A8u;
        // 0x1d62ac: 0x26940098  addiu       $s4, $s4, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62a8) {
            ctx->pc = 0x1D62B8u;
            goto label_1d62b8;
        }
    }
    ctx->pc = 0x1D62B0u;
    // 0x1d62b0: 0x5220ffef  beql        $s1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D62B0u;
    {
        const bool branch_taken_0x1d62b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d62b0) {
            ctx->pc = 0x1D62B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D62B0u;
            // 0x1d62b4: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6270;
        }
    }
    ctx->pc = 0x1D62B8u;
label_1d62b8:
    // 0x1d62b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d62b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d62bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d62c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d62c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d62c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d62c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d62c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d62c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d62cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d62ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d62d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d62d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d62d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1d62d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d62d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d62dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D62DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62DCu;
        // 0x1d62e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D62DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D62E4u;
    // 0x1d62e4: 0x0  nop
    ctx->pc = 0x1d62e4u;
    // NOP
    ctx->pc = 0x1d62e8u;
}
