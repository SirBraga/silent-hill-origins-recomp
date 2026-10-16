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

// Function: sub_002ED948
// Address: 0x2ed948 - 0x2ed9b0
void sub_002ED948_0x2ed948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED948_0x2ed948");
#endif

    switch (ctx->pc) {
        case 0x2ed948u: goto label_2ed948;
        case 0x2ed94cu: goto label_2ed94c;
        case 0x2ed950u: goto label_2ed950;
        case 0x2ed954u: goto label_2ed954;
        case 0x2ed958u: goto label_2ed958;
        case 0x2ed95cu: goto label_2ed95c;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed964u: goto label_2ed964;
        case 0x2ed968u: goto label_2ed968;
        case 0x2ed96cu: goto label_2ed96c;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed974u: goto label_2ed974;
        case 0x2ed978u: goto label_2ed978;
        case 0x2ed97cu: goto label_2ed97c;
        case 0x2ed980u: goto label_2ed980;
        case 0x2ed984u: goto label_2ed984;
        case 0x2ed988u: goto label_2ed988;
        case 0x2ed98cu: goto label_2ed98c;
        case 0x2ed990u: goto label_2ed990;
        case 0x2ed994u: goto label_2ed994;
        case 0x2ed998u: goto label_2ed998;
        case 0x2ed99cu: goto label_2ed99c;
        case 0x2ed9a0u: goto label_2ed9a0;
        case 0x2ed9a4u: goto label_2ed9a4;
        case 0x2ed9a8u: goto label_2ed9a8;
        case 0x2ed9acu: goto label_2ed9ac;
        default: break;
    }

    ctx->pc = 0x2ed948u;

label_2ed948:
    // 0x2ed948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ed94c:
    // 0x2ed94c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ed94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ed950:
    // 0x2ed950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ed954:
    // 0x2ed954: 0xc0c9ba4  jal         func_326E90
label_2ed958:
    if (ctx->pc == 0x2ED958u) {
        ctx->pc = 0x2ED958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED954u;
        // 0x2ed958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED95Cu;
        goto label_2ed95c;
    }
    ctx->pc = 0x2ED954u;
    SET_GPR_U32(ctx, 31, 0x2ED95Cu);
    ctx->pc = 0x2ED958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED954u;
    // 0x2ed958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2ED954u, 0x2ED95Cu)) {
        return;
    }
    ctx->pc = 0x2ED95Cu;
label_2ed95c:
    // 0x2ed95c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ed95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2ed960:
    // 0x2ed960: 0x8c626280  lw          $v0, 0x6280($v1)
    ctx->pc = 0x2ed960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25216)));
label_2ed964:
    // 0x2ed964: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ed968:
    if (ctx->pc == 0x2ED968u) {
        ctx->pc = 0x2ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED964u;
        // 0x2ed968: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED96Cu;
        goto label_2ed96c;
    }
    ctx->pc = 0x2ED964u;
    {
        const bool branch_taken_0x2ed964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED964u;
        // 0x2ed968: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed964) {
            ctx->pc = 0x2ED98Cu;
            goto label_2ed98c;
        }
    }
    ctx->pc = 0x2ED96Cu;
label_2ed96c:
    // 0x2ed96c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed970:
    // 0x2ed970: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x2ed970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
label_2ed974:
    // 0x2ed974: 0xc0bb80a  jal         func_2EE028
label_2ed978:
    if (ctx->pc == 0x2ED978u) {
        ctx->pc = 0x2ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED974u;
        // 0x2ed978: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED97Cu;
        goto label_2ed97c;
    }
    ctx->pc = 0x2ED974u;
    SET_GPR_U32(ctx, 31, 0x2ED97Cu);
    ctx->pc = 0x2ED978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED974u;
    // 0x2ed978: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE028u, 0x2ED974u, 0x2ED97Cu)) {
        return;
    }
    ctx->pc = 0x2ED97Cu;
label_2ed97c:
    // 0x2ed97c: 0xc0c9bb8  jal         func_326EE0
label_2ed980:
    if (ctx->pc == 0x2ED980u) {
        ctx->pc = 0x2ED984u;
        goto label_2ed984;
    }
    ctx->pc = 0x2ED97Cu;
    SET_GPR_U32(ctx, 31, 0x2ED984u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2ED97Cu, 0x2ED984u)) {
        return;
    }
    ctx->pc = 0x2ED984u;
label_2ed984:
    // 0x2ed984: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ed988:
    if (ctx->pc == 0x2ED988u) {
        ctx->pc = 0x2ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED984u;
        // 0x2ed988: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED98Cu;
        goto label_2ed98c;
    }
    ctx->pc = 0x2ED984u;
    {
        const bool branch_taken_0x2ed984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED984u;
        // 0x2ed988: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed984) {
            ctx->pc = 0x2ED9A0u;
            goto label_2ed9a0;
        }
    }
    ctx->pc = 0x2ED98Cu;
label_2ed98c:
    // 0x2ed98c: 0x40f809  jalr        $v0
label_2ed990:
    if (ctx->pc == 0x2ED990u) {
        ctx->pc = 0x2ED990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED98Cu;
        // 0x2ed990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED994u;
        goto label_2ed994;
    }
    ctx->pc = 0x2ED98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED994u);
        ctx->pc = 0x2ED990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED98Cu;
        // 0x2ed990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED98Cu, 0x2ED994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED994u;
label_2ed994:
    // 0x2ed994: 0xc0c9bb8  jal         func_326EE0
label_2ed998:
    if (ctx->pc == 0x2ED998u) {
        ctx->pc = 0x2ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED994u;
        // 0x2ed998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED99Cu;
        goto label_2ed99c;
    }
    ctx->pc = 0x2ED994u;
    SET_GPR_U32(ctx, 31, 0x2ED99Cu);
    ctx->pc = 0x2ED998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED994u;
    // 0x2ed998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2ED994u, 0x2ED99Cu)) {
        return;
    }
    ctx->pc = 0x2ED99Cu;
label_2ed99c:
    // 0x2ed99c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ed99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9a0:
    // 0x2ed9a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ed9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed9a4:
    // 0x2ed9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed9a8:
    // 0x2ed9a8: 0x3e00008  jr          $ra
label_2ed9ac:
    if (ctx->pc == 0x2ED9ACu) {
        ctx->pc = 0x2ED9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9A8u;
        // 0x2ed9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9B0u;
        goto label_fallthrough_0x2ed9a8;
    }
    ctx->pc = 0x2ED9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9A8u;
        // 0x2ed9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed9a8:
    ctx->pc = 0x2ED9B0u;
}
