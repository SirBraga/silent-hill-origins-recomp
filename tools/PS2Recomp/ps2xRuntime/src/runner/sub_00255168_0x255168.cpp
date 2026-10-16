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

// Function: sub_00255168
// Address: 0x255168 - 0x2551e0
void sub_00255168_0x255168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255168_0x255168");
#endif

    switch (ctx->pc) {
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        default: break;
    }

    ctx->pc = 0x255168u;

label_255168:
    // 0x255168: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x255168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25516c:
    // 0x25516c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_255170:
    // 0x255170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x255170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_255174:
    // 0x255174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x255174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255178:
    // 0x255178: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x255178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25517c:
    // 0x25517c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x25517cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_255180:
    // 0x255180: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x255180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_255184:
    // 0x255184: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x255184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_255188:
    // 0x255188: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x255188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25518c:
    // 0x25518c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_255190:
    // 0x255190: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x255190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_255194:
    // 0x255194: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_255198:
    if (ctx->pc == 0x255198u) {
        ctx->pc = 0x255198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255194u;
        // 0x255198: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25519Cu;
        goto label_25519c;
    }
    ctx->pc = 0x255194u;
    {
        const bool branch_taken_0x255194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x255198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255194u;
        // 0x255198: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255194) {
            ctx->pc = 0x2551BCu;
            goto label_2551bc;
        }
    }
    ctx->pc = 0x25519Cu;
label_25519c:
    // 0x25519c: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_2551a0:
    // 0x2551a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2551a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2551a4:
    // 0x2551a4: 0x280f809  jalr        $s4
label_2551a8:
    if (ctx->pc == 0x2551A8u) {
        ctx->pc = 0x2551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551A4u;
        // 0x2551a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551ACu;
        goto label_2551ac;
    }
    ctx->pc = 0x2551A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2551ACu);
        ctx->pc = 0x2551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551A4u;
        // 0x2551a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551A4u, 0x2551ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2551ACu;
label_2551ac:
    // 0x2551ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2551b0:
    if (ctx->pc == 0x2551B0u) {
        ctx->pc = 0x2551B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551ACu;
        // 0x2551b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551B4u;
        goto label_2551b4;
    }
    ctx->pc = 0x2551ACu;
    {
        const bool branch_taken_0x2551ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551ACu;
        // 0x2551b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551ac) {
            ctx->pc = 0x2551BCu;
            goto label_2551bc;
        }
    }
    ctx->pc = 0x2551B4u;
label_2551b4:
    // 0x2551b4: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
label_2551b8:
    if (ctx->pc == 0x2551B8u) {
        ctx->pc = 0x2551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B4u;
        // 0x2551b8: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551BCu;
        goto label_2551bc;
    }
    ctx->pc = 0x2551B4u;
    {
        const bool branch_taken_0x2551b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B4u;
        // 0x2551b8: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551b4) {
            ctx->pc = 0x2551A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2551a0;
        }
    }
    ctx->pc = 0x2551BCu;
label_2551bc:
    // 0x2551bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2551bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2551c0:
    // 0x2551c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2551c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2551c4:
    // 0x2551c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2551c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2551c8:
    // 0x2551c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2551c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2551cc:
    // 0x2551cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2551ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2551d0:
    // 0x2551d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2551d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2551d4:
    // 0x2551d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2551d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2551d8:
    // 0x2551d8: 0x3e00008  jr          $ra
label_2551dc:
    if (ctx->pc == 0x2551DCu) {
        ctx->pc = 0x2551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D8u;
        // 0x2551dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551E0u;
        goto label_fallthrough_0x2551d8;
    }
    ctx->pc = 0x2551D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D8u;
        // 0x2551dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2551d8:
    ctx->pc = 0x2551E0u;
}
