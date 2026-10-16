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

// Function: sub_001A8708
// Address: 0x1a8708 - 0x1a87d8
void sub_001A8708_0x1a8708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8708_0x1a8708");
#endif

    switch (ctx->pc) {
        case 0x1a8708u: goto label_1a8708;
        case 0x1a870cu: goto label_1a870c;
        case 0x1a8710u: goto label_1a8710;
        case 0x1a8714u: goto label_1a8714;
        case 0x1a8718u: goto label_1a8718;
        case 0x1a871cu: goto label_1a871c;
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8724u: goto label_1a8724;
        case 0x1a8728u: goto label_1a8728;
        case 0x1a872cu: goto label_1a872c;
        case 0x1a8730u: goto label_1a8730;
        case 0x1a8734u: goto label_1a8734;
        case 0x1a8738u: goto label_1a8738;
        case 0x1a873cu: goto label_1a873c;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8744u: goto label_1a8744;
        case 0x1a8748u: goto label_1a8748;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a8750u: goto label_1a8750;
        case 0x1a8754u: goto label_1a8754;
        case 0x1a8758u: goto label_1a8758;
        case 0x1a875cu: goto label_1a875c;
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8764u: goto label_1a8764;
        case 0x1a8768u: goto label_1a8768;
        case 0x1a876cu: goto label_1a876c;
        case 0x1a8770u: goto label_1a8770;
        case 0x1a8774u: goto label_1a8774;
        case 0x1a8778u: goto label_1a8778;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8780u: goto label_1a8780;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a8788u: goto label_1a8788;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a8790u: goto label_1a8790;
        case 0x1a8794u: goto label_1a8794;
        case 0x1a8798u: goto label_1a8798;
        case 0x1a879cu: goto label_1a879c;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87a4u: goto label_1a87a4;
        case 0x1a87a8u: goto label_1a87a8;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87b4u: goto label_1a87b4;
        case 0x1a87b8u: goto label_1a87b8;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87c0u: goto label_1a87c0;
        case 0x1a87c4u: goto label_1a87c4;
        case 0x1a87c8u: goto label_1a87c8;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87d0u: goto label_1a87d0;
        case 0x1a87d4u: goto label_1a87d4;
        default: break;
    }

    ctx->pc = 0x1a8708u;

label_1a8708:
    // 0x1a8708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a870c:
    // 0x1a870c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a8710:
    // 0x1a8710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a8714:
    // 0x1a8714: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
label_1a8718:
    if (ctx->pc == 0x1A8718u) {
        ctx->pc = 0x1A8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8714u;
        // 0x1a8718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A871Cu;
        goto label_1a871c;
    }
    ctx->pc = 0x1A8714u;
    {
        const bool branch_taken_0x1a8714 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8714u;
        // 0x1a8718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8714) {
            ctx->pc = 0x1A879Cu;
            goto label_1a879c;
        }
    }
    ctx->pc = 0x1A871Cu;
label_1a871c:
    // 0x1a871c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1a8720:
    if (ctx->pc == 0x1A8720u) {
        ctx->pc = 0x1A8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A871Cu;
        // 0x1a8720: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8724u;
        goto label_1a8724;
    }
    ctx->pc = 0x1A871Cu;
    {
        const bool branch_taken_0x1a871c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A871Cu;
        // 0x1a8720: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a871c) {
            ctx->pc = 0x1A8760u;
            goto label_1a8760;
        }
    }
    ctx->pc = 0x1A8724u;
label_1a8724:
    // 0x1a8724: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1a8728:
    // 0x1a8728: 0x2442b3f0  addiu       $v0, $v0, -0x4C10
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947824));
label_1a872c:
    // 0x1a872c: 0x247081b0  addiu       $s0, $v1, -0x7E50
    ctx->pc = 0x1a872cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
label_1a8730:
    // 0x1a8730: 0xac6281b0  sw          $v0, -0x7E50($v1)
    ctx->pc = 0x1a8730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934960), GPR_U32(ctx, 2));
label_1a8734:
    // 0x1a8734: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a8734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a8738:
    // 0x1a8738: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a8738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1a873c:
    // 0x1a873c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8740:
    // 0x1a8740: 0xc0808f0  jal         func_2023C0
label_1a8744:
    if (ctx->pc == 0x1A8744u) {
        ctx->pc = 0x1A8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8740u;
        // 0x1a8744: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8748u;
        goto label_1a8748;
    }
    ctx->pc = 0x1A8740u;
    SET_GPR_U32(ctx, 31, 0x1A8748u);
    ctx->pc = 0x1A8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8740u;
    // 0x1a8744: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1A8740u, 0x1A8748u)) {
        return;
    }
    ctx->pc = 0x1A8748u;
label_1a8748:
    // 0x1a8748: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1a8748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1a874c:
    // 0x1a874c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1a8750:
    // 0x1a8750: 0x2463b308  addiu       $v1, $v1, -0x4CF8
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947592));
label_1a8754:
    // 0x1a8754: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1a8754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1a8758:
    // 0x1a8758: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a875c:
    if (ctx->pc == 0x1A875Cu) {
        ctx->pc = 0x1A875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8758u;
        // 0x1a875c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8760u;
        goto label_1a8760;
    }
    ctx->pc = 0x1A8758u;
    {
        const bool branch_taken_0x1a8758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8758u;
        // 0x1a875c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8758) {
            ctx->pc = 0x1A879Cu;
            goto label_1a879c;
        }
    }
    ctx->pc = 0x1A8760u;
label_1a8760:
    // 0x1a8760: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_1a8764:
    // 0x1a8764: 0x260381b0  addiu       $v1, $s0, -0x7E50
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934960));
label_1a8768:
    // 0x1a8768: 0x2442b3f0  addiu       $v0, $v0, -0x4C10
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947824));
label_1a876c:
    // 0x1a876c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1a876cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a8770:
    // 0x1a8770: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1a8774:
    if (ctx->pc == 0x1A8774u) {
        ctx->pc = 0x1A8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8770u;
        // 0x1a8774: 0xae0281b0  sw          $v0, -0x7E50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294934960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8778u;
        goto label_1a8778;
    }
    ctx->pc = 0x1A8770u;
    {
        const bool branch_taken_0x1a8770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8770u;
        // 0x1a8774: 0xae0281b0  sw          $v0, -0x7E50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294934960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8770) {
            ctx->pc = 0x1A8790u;
            goto label_1a8790;
        }
    }
    ctx->pc = 0x1A8778u;
label_1a8778:
    // 0x1a8778: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a877c:
    // 0x1a877c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a8780:
    // 0x1a8780: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a8780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1a8784:
    // 0x1a8784: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a8788:
    // 0x1a8788: 0x60f809  jalr        $v1
label_1a878c:
    if (ctx->pc == 0x1A878Cu) {
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8790u;
        goto label_1a8790;
    }
    ctx->pc = 0x1A8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8790u);
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8788u, 0x1A8790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1a8794:
    // 0x1a8794: 0x2442b440  addiu       $v0, $v0, -0x4BC0
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
label_1a8798:
    // 0x1a8798: 0xae0281b0  sw          $v0, -0x7E50($s0)
    ctx->pc = 0x1a8798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294934960), GPR_U32(ctx, 2));
label_1a879c:
    // 0x1a879c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a879cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a87a0:
    // 0x1a87a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a87a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a87a4:
    // 0x1a87a4: 0x3e00008  jr          $ra
label_1a87a8:
    if (ctx->pc == 0x1A87A8u) {
        ctx->pc = 0x1A87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A4u;
        // 0x1a87a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87ACu;
        goto label_1a87ac;
    }
    ctx->pc = 0x1A87A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A4u;
        // 0x1a87a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A87ACu;
label_1a87ac:
    // 0x1a87ac: 0x0  nop
    ctx->pc = 0x1a87acu;
    // NOP
label_1a87b0:
    // 0x1a87b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a87b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a87b4:
    // 0x1a87b4: 0x0  nop
    ctx->pc = 0x1a87b4u;
    // NOP
label_1a87b8:
    // 0x1a87b8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1a87b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1a87bc:
    // 0x1a87bc: 0x0  nop
    ctx->pc = 0x1a87bcu;
    // NOP
label_1a87c0:
    // 0x1a87c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a87c4:
    // 0x1a87c4: 0x0  nop
    ctx->pc = 0x1a87c4u;
    // NOP
label_1a87c8:
    // 0x1a87c8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a87cc:
    // 0x1a87cc: 0x0  nop
    ctx->pc = 0x1a87ccu;
    // NOP
label_1a87d0:
    // 0x1a87d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a87d4:
    // 0x1a87d4: 0x0  nop
    ctx->pc = 0x1a87d4u;
    // NOP
    ctx->pc = 0x1a87d8u;
}
