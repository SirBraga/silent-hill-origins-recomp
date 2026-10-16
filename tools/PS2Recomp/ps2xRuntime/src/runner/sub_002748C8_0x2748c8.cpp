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

// Function: sub_002748C8
// Address: 0x2748c8 - 0x274970
void sub_002748C8_0x2748c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002748C8_0x2748c8");
#endif

    switch (ctx->pc) {
        case 0x274908u: goto label_274908;
        case 0x274910u: goto label_274910;
        case 0x274930u: goto label_274930;
        case 0x27494cu: goto label_27494c;
        default: break;
    }

    ctx->pc = 0x2748c8u;

    // 0x2748c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2748cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2748ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2748d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2748d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2748d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2748d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2748d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2748dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2748dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2748e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2748E0u;
    {
        const bool branch_taken_0x2748e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748E0u;
        // 0x2748e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748e0) {
            ctx->pc = 0x2748F4u;
            goto label_2748f4;
        }
    }
    ctx->pc = 0x2748E8u;
    // 0x2748e8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2748e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2748ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2748ECu;
    {
        const bool branch_taken_0x2748ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2748F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748ECu;
        // 0x2748f0: 0x8f828f88  lw          $v0, -0x7078($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748ec) {
            ctx->pc = 0x2748FCu;
            goto label_2748fc;
        }
    }
    ctx->pc = 0x2748F4u;
label_2748f4:
    // 0x2748f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2748F4u;
    {
        const bool branch_taken_0x2748f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748F4u;
        // 0x2748f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748f4) {
            ctx->pc = 0x274958u;
            goto label_274958;
        }
    }
    ctx->pc = 0x2748FCu;
label_2748fc:
    // 0x2748fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2748FCu;
    {
        const bool branch_taken_0x2748fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748FCu;
        // 0x274900: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748fc) {
            ctx->pc = 0x27491Cu;
            goto label_27491c;
        }
    }
    ctx->pc = 0x274904u;
    // 0x274904: 0x0  nop
    ctx->pc = 0x274904u;
    // NOP
label_274908:
    // 0x274908: 0xc0c85b0  jal         func_3216C0
    ctx->pc = 0x274908u;
    SET_GPR_U32(ctx, 31, 0x274910u);
    ctx->pc = 0x27490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274908u;
    // 0x27490c: 0x8f848f88  lw          $a0, -0x7078($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3216C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3216C0u, 0x274908u, 0x274910u)) {
        return;
    }
    ctx->pc = 0x274910u;
label_274910:
    // 0x274910: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x274910u;
    {
        const bool branch_taken_0x274910 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x274910) {
            ctx->pc = 0x274908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274908;
        }
    }
    ctx->pc = 0x274918u;
    // 0x274918: 0xaf808f88  sw          $zero, -0x7078($gp)
    ctx->pc = 0x274918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
label_27491c:
    // 0x27491c: 0x92020064  lbu         $v0, 0x64($s0)
    ctx->pc = 0x27491cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x274920: 0x262355c0  addiu       $v1, $s1, 0x55C0
    ctx->pc = 0x274920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 21952));
    // 0x274924: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x274924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x274928: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x274928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x27492c: 0x0  nop
    ctx->pc = 0x27492cu;
    // NOP
label_274930:
    // 0x274930: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274934: 0x262555c0  addiu       $a1, $s1, 0x55C0
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21952));
    // 0x274938: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27493c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27493cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274944: 0xc0c9046  jal         func_324118
    ctx->pc = 0x274944u;
    SET_GPR_U32(ctx, 31, 0x27494Cu);
    ctx->pc = 0x274948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274944u;
    // 0x274948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324118u, 0x274944u, 0x27494Cu)) {
        return;
    }
    ctx->pc = 0x27494Cu;
label_27494c:
    // 0x27494c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27494Cu;
    {
        const bool branch_taken_0x27494c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27494Cu;
        // 0x274950: 0xaf828f88  sw          $v0, -0x7078($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27494c) {
            ctx->pc = 0x274930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274930;
        }
    }
    ctx->pc = 0x274954u;
    // 0x274954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274958:
    // 0x274958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x274958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27495c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27495cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274964: 0x3e00008  jr          $ra
    ctx->pc = 0x274964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274964u;
        // 0x274968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27496Cu;
    // 0x27496c: 0x0  nop
    ctx->pc = 0x27496cu;
    // NOP
    ctx->pc = 0x274970u;
}
