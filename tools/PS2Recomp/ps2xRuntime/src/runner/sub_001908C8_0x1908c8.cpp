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

// Function: sub_001908C8
// Address: 0x1908c8 - 0x190998
void sub_001908C8_0x1908c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001908C8_0x1908c8");
#endif

    switch (ctx->pc) {
        case 0x1908f8u: goto label_1908f8;
        case 0x190954u: goto label_190954;
        case 0x190974u: goto label_190974;
        case 0x190980u: goto label_190980;
        default: break;
    }

    ctx->pc = 0x1908c8u;

    // 0x1908c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1908cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1908ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1908d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1908d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1908d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1908d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1908d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1908dc: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1908e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1908e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1908e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1908e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1908E8u;
    {
        const bool branch_taken_0x1908e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908E8u;
        // 0x1908ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908e8) {
            ctx->pc = 0x190910u;
            goto label_190910;
        }
    }
    ctx->pc = 0x1908F0u;
    // 0x1908f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1908f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1908f8:
    // 0x1908f8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1908F8u;
    {
        const bool branch_taken_0x1908f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908f8) {
            ctx->pc = 0x190914u;
            goto label_190914;
        }
    }
    ctx->pc = 0x190900u;
    // 0x190900: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190904: 0x0  nop
    ctx->pc = 0x190904u;
    // NOP
    // 0x190908: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190908u;
    {
        const bool branch_taken_0x190908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x190908) {
            ctx->pc = 0x19090Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190908u;
            // 0x19090c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1908F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1908f8;
        }
    }
    ctx->pc = 0x190910u;
label_190910:
    // 0x190910: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190914:
    // 0x190914: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190914u;
    {
        const bool branch_taken_0x190914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190914) {
            ctx->pc = 0x190918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190914u;
            // 0x190918: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190964u;
            goto label_190964;
        }
    }
    ctx->pc = 0x19091Cu;
    // 0x19091c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190920: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190920u;
    {
        const bool branch_taken_0x190920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190920u;
        // 0x190924: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190920) {
            ctx->pc = 0x190930u;
            goto label_190930;
        }
    }
    ctx->pc = 0x190928u;
    // 0x190928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190928u;
    {
        const bool branch_taken_0x190928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190928u;
        // 0x19092c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190928) {
            ctx->pc = 0x190934u;
            goto label_190934;
        }
    }
    ctx->pc = 0x190930u;
label_190930:
    // 0x190930: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190934:
    // 0x190934: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190938: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190938u;
    {
        const bool branch_taken_0x190938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190938u;
        // 0x19093c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190938) {
            ctx->pc = 0x190948u;
            goto label_190948;
        }
    }
    ctx->pc = 0x190940u;
    // 0x190940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190940u;
    {
        const bool branch_taken_0x190940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190940u;
        // 0x190944: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190940) {
            ctx->pc = 0x19094Cu;
            goto label_19094c;
        }
    }
    ctx->pc = 0x190948u;
label_190948:
    // 0x190948: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_19094c:
    // 0x19094c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19094Cu;
    SET_GPR_U32(ctx, 31, 0x190954u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19094Cu, 0x190954u)) {
        return;
    }
    ctx->pc = 0x190954u;
label_190954:
    // 0x190954: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190958: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19095c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190960: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190964:
    // 0x190964: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190964u;
    {
        const bool branch_taken_0x190964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190964) {
            ctx->pc = 0x190968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190964u;
            // 0x190968: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190978u;
            goto label_190978;
        }
    }
    ctx->pc = 0x19096Cu;
    // 0x19096c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19096Cu;
    SET_GPR_U32(ctx, 31, 0x190974u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19096Cu, 0x190974u)) {
        return;
    }
    ctx->pc = 0x190974u;
label_190974:
    // 0x190974: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x190974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_190978:
    // 0x190978: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190978u;
    SET_GPR_U32(ctx, 31, 0x190980u);
    ctx->pc = 0x19097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190978u;
    // 0x19097c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190978u, 0x190980u)) {
        return;
    }
    ctx->pc = 0x190980u;
label_190980:
    // 0x190980: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190988: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19098c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190990: 0x3e00008  jr          $ra
    ctx->pc = 0x190990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190998u;
}
