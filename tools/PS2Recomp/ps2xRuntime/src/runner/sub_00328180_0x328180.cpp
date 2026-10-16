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

// Function: sub_00328180
// Address: 0x328180 - 0x3283d8
void sub_00328180_0x328180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328180_0x328180");
#endif

    switch (ctx->pc) {
        case 0x3281c8u: goto label_3281c8;
        case 0x3281f4u: goto label_3281f4;
        case 0x328208u: goto label_328208;
        case 0x328234u: goto label_328234;
        case 0x32825cu: goto label_32825c;
        case 0x328264u: goto label_328264;
        case 0x328274u: goto label_328274;
        case 0x3282b0u: goto label_3282b0;
        case 0x328320u: goto label_328320;
        case 0x328364u: goto label_328364;
        case 0x32836cu: goto label_32836c;
        case 0x3283a0u: goto label_3283a0;
        default: break;
    }

    ctx->pc = 0x328180u;

    // 0x328180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x328180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x328184: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x328184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x328188: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x328188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x32818c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32818cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328190: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x328190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x328194: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x328194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328198: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x328198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x32819c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32819cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3281a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3281a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3281a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3281a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3281a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3281ac: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3281ACu;
    {
        const bool branch_taken_0x3281ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3281B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281ACu;
        // 0x3281b0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281ac) {
            ctx->pc = 0x3281C0u;
            goto label_3281c0;
        }
    }
    ctx->pc = 0x3281B4u;
    // 0x3281b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3281b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3281b8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3281B8u;
    {
        const bool branch_taken_0x3281b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B8u;
        // 0x3281bc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281b8) {
            ctx->pc = 0x328284u;
            goto label_328284;
        }
    }
    ctx->pc = 0x3281C0u;
label_3281c0:
    // 0x3281c0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x3281C0u;
    SET_GPR_U32(ctx, 31, 0x3281C8u);
    ctx->pc = 0x3281C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281C0u;
    // 0x3281c4: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x3281C0u, 0x3281C8u)) {
        return;
    }
    ctx->pc = 0x3281C8u;
label_3281c8:
    // 0x3281c8: 0x8e50fb40  lw          $s0, -0x4C0($s2)
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966080)));
    // 0x3281cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3281CCu;
    {
        const bool branch_taken_0x3281cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281CCu;
        // 0x3281d0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281cc) {
            ctx->pc = 0x3281DCu;
            goto label_3281dc;
        }
    }
    ctx->pc = 0x3281D4u;
    // 0x3281d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3281d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3281d8: 0xae42fb40  sw          $v0, -0x4C0($s2)
    ctx->pc = 0x3281d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966080), GPR_U32(ctx, 2));
label_3281dc:
    // 0x3281dc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3281DCu;
    {
        const bool branch_taken_0x3281dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3281dc) {
            ctx->pc = 0x328200u;
            goto label_328200;
        }
    }
    ctx->pc = 0x3281E4u;
    // 0x3281e4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3281E4u;
    {
        const bool branch_taken_0x3281e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3281e4) {
            ctx->pc = 0x3281F4u;
            goto label_3281f4;
        }
    }
    ctx->pc = 0x3281ECu;
    // 0x3281ec: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3281ECu;
    SET_GPR_U32(ctx, 31, 0x3281F4u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3281ECu, 0x3281F4u)) {
        return;
    }
    ctx->pc = 0x3281F4u;
label_3281f4:
    // 0x3281f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3281f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3281f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3281F8u;
    {
        const bool branch_taken_0x3281f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281F8u;
        // 0x3281fc: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281f8) {
            ctx->pc = 0x328284u;
            goto label_328284;
        }
    }
    ctx->pc = 0x328200u;
label_328200:
    // 0x328200: 0xc0c9f54  jal         func_327D50
    ctx->pc = 0x328200u;
    SET_GPR_U32(ctx, 31, 0x328208u);
    ctx->pc = 0x327D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327D50u, 0x328200u, 0x328208u)) {
        return;
    }
    ctx->pc = 0x328208u;
label_328208:
    // 0x328208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32820c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x32820Cu;
    {
        const bool branch_taken_0x32820c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x32820c) {
            ctx->pc = 0x328210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32820Cu;
            // 0x328210: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32823Cu;
            goto label_32823c;
        }
    }
    ctx->pc = 0x328214u;
    // 0x328214: 0x8e42fb40  lw          $v0, -0x4C0($s2)
    ctx->pc = 0x328214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966080)));
    // 0x328218: 0xae50fb40  sw          $s0, -0x4C0($s2)
    ctx->pc = 0x328218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966080), GPR_U32(ctx, 16));
    // 0x32821c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32821cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x328220: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x328224: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x328224u;
    {
        const bool branch_taken_0x328224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x328228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328224u;
        // 0x328228: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328224) {
            ctx->pc = 0x328284u;
            goto label_328284;
        }
    }
    ctx->pc = 0x32822Cu;
    // 0x32822c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x32822Cu;
    SET_GPR_U32(ctx, 31, 0x328234u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x32822Cu, 0x328234u)) {
        return;
    }
    ctx->pc = 0x328234u;
label_328234:
    // 0x328234: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x328234u;
    {
        const bool branch_taken_0x328234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328234u;
        // 0x328238: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328234) {
            ctx->pc = 0x328284u;
            goto label_328284;
        }
    }
    ctx->pc = 0x32823Cu;
label_32823c:
    // 0x32823c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32823cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x328240: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x328240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x328244: 0x24c68120  addiu       $a2, $a2, -0x7EE0
    ctx->pc = 0x328244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934816));
    // 0x328248: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x328248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x32824c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328254: 0xc0c9ff4  jal         func_327FD0
    ctx->pc = 0x328254u;
    SET_GPR_U32(ctx, 31, 0x32825Cu);
    ctx->pc = 0x328258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328254u;
    // 0x328258: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327FD0u, 0x328254u, 0x32825Cu)) {
        return;
    }
    ctx->pc = 0x32825Cu;
label_32825c:
    // 0x32825c: 0xc0c9f96  jal         func_327E58
    ctx->pc = 0x32825Cu;
    SET_GPR_U32(ctx, 31, 0x328264u);
    ctx->pc = 0x328260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32825Cu;
    // 0x328260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327E58u, 0x32825Cu, 0x328264u)) {
        return;
    }
    ctx->pc = 0x328264u;
label_328264:
    // 0x328264: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x328264u;
    {
        const bool branch_taken_0x328264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x328268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328264u;
        // 0x328268: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328264) {
            ctx->pc = 0x328278u;
            goto label_328278;
        }
    }
    ctx->pc = 0x32826Cu;
    // 0x32826c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x32826Cu;
    SET_GPR_U32(ctx, 31, 0x328274u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x32826Cu, 0x328274u)) {
        return;
    }
    ctx->pc = 0x328274u;
label_328274:
    // 0x328274: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x328274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_328278:
    // 0x328278: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x328278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x32827c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x328280: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_328284:
    // 0x328284: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x328284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x328288: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x328288u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32828c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x32828cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328290: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x328290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328294: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x328294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328298: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x328298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32829c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32829cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3282a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3282a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3282A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3282A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A4u;
        // 0x3282a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3282ACu;
    // 0x3282ac: 0x0  nop
    ctx->pc = 0x3282acu;
    // NOP
label_3282b0:
    // 0x3282b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3282b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3282b4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3282b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3282b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3282b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3282bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3282bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3282c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3282c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3282c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3282cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3282ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3282d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3282d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3282d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3282d8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3282D8u;
    {
        const bool branch_taken_0x3282d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3282DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282D8u;
        // 0x3282dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282d8) {
            ctx->pc = 0x3282ECu;
            goto label_3282ec;
        }
    }
    ctx->pc = 0x3282E0u;
    // 0x3282e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3282e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3282e4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3282E4u;
    {
        const bool branch_taken_0x3282e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282E4u;
        // 0x3282e8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282e4) {
            ctx->pc = 0x32837Cu;
            goto label_32837c;
        }
    }
    ctx->pc = 0x3282ECu;
label_3282ec:
    // 0x3282ec: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x3282ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x3282f0: 0x8e50fb40  lw          $s0, -0x4C0($s2)
    ctx->pc = 0x3282f0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x72FB40u));
    // 0x3282f4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3282F4u;
    {
        const bool branch_taken_0x3282f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3282f4) {
            ctx->pc = 0x328304u;
            goto label_328304;
        }
    }
    ctx->pc = 0x3282FCu;
    // 0x3282fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328300: 0xae42fb40  sw          $v0, -0x4C0($s2)
    ctx->pc = 0x328300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966080), GPR_U32(ctx, 2));
label_328304:
    // 0x328304: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328304u;
    {
        const bool branch_taken_0x328304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x328304) {
            ctx->pc = 0x328318u;
            goto label_328318;
        }
    }
    ctx->pc = 0x32830Cu;
    // 0x32830c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x328310: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x328310u;
    {
        const bool branch_taken_0x328310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328310u;
        // 0x328314: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328310) {
            ctx->pc = 0x32837Cu;
            goto label_32837c;
        }
    }
    ctx->pc = 0x328318u;
label_328318:
    // 0x328318: 0xc0c9f38  jal         func_327CE0
    ctx->pc = 0x328318u;
    SET_GPR_U32(ctx, 31, 0x328320u);
    ctx->pc = 0x327CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327CE0u, 0x328318u, 0x328320u)) {
        return;
    }
    ctx->pc = 0x328320u;
label_328320:
    // 0x328320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328324: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328324u;
    {
        const bool branch_taken_0x328324 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x328324) {
            ctx->pc = 0x328328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328324u;
            // 0x328328: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328344u;
            goto label_328344;
        }
    }
    ctx->pc = 0x32832Cu;
    // 0x32832c: 0x8e43fb40  lw          $v1, -0x4C0($s2)
    ctx->pc = 0x32832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966080)));
    // 0x328330: 0xae50fb40  sw          $s0, -0x4C0($s2)
    ctx->pc = 0x328330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966080), GPR_U32(ctx, 16));
    // 0x328334: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x328334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x328338: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x32833c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32833Cu;
    {
        const bool branch_taken_0x32833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32833Cu;
        // 0x328340: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32833c) {
            ctx->pc = 0x328380u;
            goto label_328380;
        }
    }
    ctx->pc = 0x328344u;
label_328344:
    // 0x328344: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x328344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x328348: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x328348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x32834c: 0x24c68120  addiu       $a2, $a2, -0x7EE0
    ctx->pc = 0x32834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934816));
    // 0x328350: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x328350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x328354: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x328354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32835c: 0xc0c9fb6  jal         func_327ED8
    ctx->pc = 0x32835Cu;
    SET_GPR_U32(ctx, 31, 0x328364u);
    ctx->pc = 0x328360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32835Cu;
    // 0x328360: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327ED8u, 0x32835Cu, 0x328364u)) {
        return;
    }
    ctx->pc = 0x328364u;
label_328364:
    // 0x328364: 0xc0c9f6a  jal         func_327DA8
    ctx->pc = 0x328364u;
    SET_GPR_U32(ctx, 31, 0x32836Cu);
    ctx->pc = 0x328368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328364u;
    // 0x328368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327DA8u, 0x328364u, 0x32836Cu)) {
        return;
    }
    ctx->pc = 0x32836Cu;
label_32836c:
    // 0x32836c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x32836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328370: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x328370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x328374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x328374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x328378: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_32837c:
    // 0x32837c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x32837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_328380:
    // 0x328380: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x328380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328384: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x328384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328388: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x328388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32838c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32838cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328390: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x328390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328398: 0x3e00008  jr          $ra
    ctx->pc = 0x328398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328398u;
        // 0x32839c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283A0u;
label_3283a0:
    // 0x3283a0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3283a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3283a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3283a8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x3283a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x3283ac: 0xac4085b0  sw          $zero, -0x7A50($v0)
    ctx->pc = 0x3283acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6885B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6885B0u, _value); } while (0);
    // 0x3283b0: 0xac6085b4  sw          $zero, -0x7A4C($v1)
    ctx->pc = 0x3283b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6885B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6885B4u, _value); } while (0);
    // 0x3283b4: 0x2484fb48  addiu       $a0, $a0, -0x4B8
    ctx->pc = 0x3283b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966088));
    // 0x3283b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3283b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283bc: 0x80c493d  j           func_3124F4
    ctx->pc = 0x3283BCu;
    ctx->pc = 0x3283C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283BCu;
    // 0x3283c0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    sub_003124F4_0x3124f4(rdram, ctx, runtime); return;
    ctx->pc = 0x3283C4u;
    // 0x3283c4: 0x0  nop
    ctx->pc = 0x3283c4u;
    // NOP
    // 0x3283c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3283c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3283cc: 0x0  nop
    ctx->pc = 0x3283ccu;
    // NOP
    // 0x3283d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3283d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3283d4: 0x0  nop
    ctx->pc = 0x3283d4u;
    // NOP
    ctx->pc = 0x3283d8u;
}
