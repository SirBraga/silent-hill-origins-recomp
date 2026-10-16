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

// Function: sub_002FA278
// Address: 0x2fa278 - 0x2fa698
void sub_002FA278_0x2fa278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA278_0x2fa278");
#endif

    switch (ctx->pc) {
        case 0x2fa34cu: goto label_2fa34c;
        case 0x2fa5d8u: goto label_2fa5d8;
        case 0x2fa5e4u: goto label_2fa5e4;
        case 0x2fa628u: goto label_2fa628;
        case 0x2fa638u: goto label_2fa638;
        default: break;
    }

    ctx->pc = 0x2fa278u;

    // 0x2fa278: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2fa278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2fa27c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa280: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x2fa280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x2fa284: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x2fa284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x2fa288: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2fa288u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa28c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2fa28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2fa290: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2fa290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa294: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x2fa294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2fa298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fa298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa29c: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x2fa29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x2fa2a0: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2fa2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2fa2a4: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x2fa2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x2fa2a8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x2fa2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x2fa2ac: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x2fa2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x2fa2b0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2fa2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2fa2b4: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x2fa2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x2fa2b8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA2B8u;
    {
        const bool branch_taken_0x2fa2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2B8u;
        // 0x2fa2bc: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2b8) {
            ctx->pc = 0x2FA2D4u;
            goto label_2fa2d4;
        }
    }
    ctx->pc = 0x2FA2C0u;
    // 0x2fa2c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2fa2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2fa2c4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2fa2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2c8: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x2fa2c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA2CCu;
    {
        const bool branch_taken_0x2fa2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2CCu;
        // 0x2fa2d0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2cc) {
            ctx->pc = 0x2FA2DCu;
            goto label_2fa2dc;
        }
    }
    ctx->pc = 0x2FA2D4u;
label_2fa2d4:
    // 0x2fa2d4: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x2fa2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2d8: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2dc:
    // 0x2fa2dc: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x2fa2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x2fa2e0: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x2fa2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2fa2e4: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x2fa2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2fa2e8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x2fa2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2fa2ec: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x2fa2ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2fa2f0: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x2fa2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x2fa2f4: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FA2F4u;
    {
        const bool branch_taken_0x2fa2f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2F4u;
        // 0x2fa2f8: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2f4) {
            ctx->pc = 0x2FA388u;
            goto label_2fa388;
        }
    }
    ctx->pc = 0x2FA2FCu;
    // 0x2fa2fc: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x2fa2fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2fa300: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FA300u;
    {
        const bool branch_taken_0x2fa300 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2fa300) {
            ctx->pc = 0x2FA304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA300u;
            // 0x2fa304: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA398u;
            goto label_2fa398;
        }
    }
    ctx->pc = 0x2FA308u;
    // 0x2fa308: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2fa308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2fa30c: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FA30Cu;
    {
        const bool branch_taken_0x2fa30c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa30c) {
            ctx->pc = 0x2FA310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA30Cu;
            // 0x2fa310: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA398u;
            goto label_2fa398;
        }
    }
    ctx->pc = 0x2FA314u;
    // 0x2fa314: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x2fa314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2fa318: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x2fa318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa31c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2fa31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa320: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2fa320u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fa324: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x2fa324u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa328: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x2fa328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2fa32c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2fa32cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2fa330: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x2fa330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2fa334: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2fa334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fa338: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fa338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fa33c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2fa33cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2fa340: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2fa340u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2fa344: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2FA344u;
    SET_GPR_U32(ctx, 31, 0x2FA34Cu);
    ctx->pc = 0x2FA348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA344u;
    // 0x2fa348: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2FA344u, 0x2FA34Cu)) {
        return;
    }
    ctx->pc = 0x2FA34Cu;
label_2fa34c:
    // 0x2fa34c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x2fa34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x2fa350: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa354: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x2fa354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2fa358: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fa358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2fa35c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa360: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x2fa360u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x2fa364: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x2fa364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa368: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2fa368u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2fa36c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA36Cu;
    {
        const bool branch_taken_0x2fa36c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA36Cu;
        // 0x2fa370: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa36c) {
            ctx->pc = 0x2FA394u;
            goto label_2fa394;
        }
    }
    ctx->pc = 0x2FA374u;
    // 0x2fa374: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fa378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fa37c: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x2fa37cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2fa380: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA380u;
    {
        const bool branch_taken_0x2fa380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA380u;
        // 0x2fa384: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa380) {
            ctx->pc = 0x2FA398u;
            goto label_2fa398;
        }
    }
    ctx->pc = 0x2FA388u;
label_2fa388:
    // 0x2fa388: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x2fa388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2fa38c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA38Cu;
    {
        const bool branch_taken_0x2fa38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA38Cu;
        // 0x2fa390: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa38c) {
            ctx->pc = 0x2FA398u;
            goto label_2fa398;
        }
    }
    ctx->pc = 0x2FA394u;
label_2fa394:
    // 0x2fa394: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x2fa394u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2fa398:
    // 0x2fa398: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x2fa398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2fa39c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa3a0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA3A0u;
    {
        const bool branch_taken_0x2fa3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa3a0) {
            ctx->pc = 0x2FA3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3A0u;
            // 0x2fa3a4: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3C8u;
            goto label_2fa3c8;
        }
    }
    ctx->pc = 0x2FA3A8u;
    // 0x2fa3a8: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2fa3a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2fa3ac: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA3ACu;
    {
        const bool branch_taken_0x2fa3ac = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa3ac) {
            ctx->pc = 0x2FA3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3ACu;
            // 0x2fa3b0: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3C8u;
            goto label_2fa3c8;
        }
    }
    ctx->pc = 0x2FA3B4u;
    // 0x2fa3b4: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x2fa3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2fa3b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fa3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa3bc: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2fa3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x2fa3c0: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x2fa3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x2fa3c4: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x2fa3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2fa3c8:
    // 0x2fa3c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fa3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa3cc: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x2fa3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2fa3d0: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x2fa3d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2fa3d4: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x2fa3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2fa3d8: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x2fa3d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x2fa3dc: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x2fa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2fa3e0: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x2fa3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x2fa3e4: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x2fa3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x2fa3e8: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2fa3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2fa3ec: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2fa3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2fa3f0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2fa3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2fa3f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fa3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fa3f8: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x2fa3f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2fa3fc: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x2fa3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2fa400: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fa400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fa404: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x2fa404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x2fa408: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x2fa408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2fa40c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2fa40cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2fa410: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x2fa414: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fa414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fa418: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2fa418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2fa41c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2fa41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2fa420: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fa420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fa424: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2fa424u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2fa428: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2fa428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2fa42c: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x2fa42cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x2fa430: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FA430u;
    {
        const bool branch_taken_0x2fa430 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA430u;
        // 0x2fa434: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa430) {
            ctx->pc = 0x2FA494u;
            goto label_2fa494;
        }
    }
    ctx->pc = 0x2FA438u;
    // 0x2fa438: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x2fa438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x2fa43c: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FA43Cu;
    {
        const bool branch_taken_0x2fa43c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2fa43c) {
            ctx->pc = 0x2FA440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA43Cu;
            // 0x2fa440: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA49Cu;
            goto label_2fa49c;
        }
    }
    ctx->pc = 0x2FA444u;
    // 0x2fa444: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FA444u;
    {
        const bool branch_taken_0x2fa444 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2fa444) {
            ctx->pc = 0x2FA448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA444u;
            // 0x2fa448: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA49Cu;
            goto label_2fa49c;
        }
    }
    ctx->pc = 0x2FA44Cu;
    // 0x2fa44c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x2fa44cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa450: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2fa450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa454: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x2fa454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fa458: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa45c: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x2fa45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x2fa460: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2fa460u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2fa464: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2fa464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fa468: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa46c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa470: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x2fa470u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x2fa474: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x2fa474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa47c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA47Cu;
    {
        const bool branch_taken_0x2fa47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA47Cu;
        // 0x2fa480: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa47c) {
            ctx->pc = 0x2FA49Cu;
            goto label_2fa49c;
        }
    }
    ctx->pc = 0x2FA484u;
    // 0x2fa484: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2fa484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fa488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fa48c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA48Cu;
    {
        const bool branch_taken_0x2fa48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA48Cu;
        // 0x2fa490: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa48c) {
            ctx->pc = 0x2FA49Cu;
            goto label_2fa49c;
        }
    }
    ctx->pc = 0x2FA494u;
label_2fa494:
    // 0x2fa494: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x2fa494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x2fa498: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2fa498u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_2fa49c:
    // 0x2fa49c: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x2fa49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2fa4a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa4a4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA4A4u;
    {
        const bool branch_taken_0x2fa4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa4a4) {
            ctx->pc = 0x2FA4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4A4u;
            // 0x2fa4a8: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA4CCu;
            goto label_2fa4cc;
        }
    }
    ctx->pc = 0x2FA4ACu;
    // 0x2fa4ac: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2fa4acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2fa4b0: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA4B0u;
    {
        const bool branch_taken_0x2fa4b0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa4b0) {
            ctx->pc = 0x2FA4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4B0u;
            // 0x2fa4b4: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA4CCu;
            goto label_2fa4cc;
        }
    }
    ctx->pc = 0x2FA4B8u;
    // 0x2fa4b8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2fa4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x2fa4bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa4c0: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2fa4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x2fa4c4: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x2fa4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x2fa4c8: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x2fa4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_2fa4cc:
    // 0x2fa4cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2fa4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa4d0: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x2fa4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x2fa4d4: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x2fa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x2fa4d8: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x2fa4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x2fa4dc: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x2fa4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x2fa4e0: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x2fa4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x2fa4e4: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x2fa4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2fa4e8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2fa4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2fa4ec: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x2fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x2fa4f0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fa4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fa4f4: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x2fa4f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2fa4f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fa4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fa4fc: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2fa4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2fa500: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x2fa500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x2fa504: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x2fa504u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fa508: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fa508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fa50c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2fa50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2fa510: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x2fa510u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x2fa514: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fa514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fa518: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x2fa518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2fa51c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x2fa51cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x2fa520: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2fa520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2fa524: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x2fa524u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x2fa528: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x2fa528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x2fa52c: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x2fa52cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2fa530: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x2fa534: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2fa534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2fa538: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x2fa538u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2fa53c: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x2fa53cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x2fa540: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x2fa540u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x2fa544: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2fa544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2fa548: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x2fa548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x2fa54c: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x2fa54cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x2fa550: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x2fa550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x2fa554: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x2fa554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x2fa558: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x2fa558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x2fa55c: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x2fa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x2fa560: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x2fa560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x2fa564: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x2fa564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2fa568: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x2fa568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x2fa56c: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x2fa56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2fa570: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA570u;
    {
        const bool branch_taken_0x2fa570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA570u;
        // 0x2fa574: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa570) {
            ctx->pc = 0x2FA59Cu;
            goto label_2fa59c;
        }
    }
    ctx->pc = 0x2FA578u;
    // 0x2fa578: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2fa578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2fa57c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2fa57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2fa580: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fa580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa584: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA584u;
    {
        const bool branch_taken_0x2fa584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA584u;
        // 0x2fa588: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa584) {
            ctx->pc = 0x2FA5B4u;
            goto label_2fa5b4;
        }
    }
    ctx->pc = 0x2FA58Cu;
    // 0x2fa58c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2fa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2fa590: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2fa590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fa594: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA594u;
    {
        const bool branch_taken_0x2fa594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA594u;
        // 0x2fa598: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa594) {
            ctx->pc = 0x2FA5B4u;
            goto label_2fa5b4;
        }
    }
    ctx->pc = 0x2FA59Cu;
label_2fa59c:
    // 0x2fa59c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2fa59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2fa5a0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2fa5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fa5a4: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x2fa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2fa5a8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2fa5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fa5ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fa5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa5b0: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x2fa5b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fa5b4:
    // 0x2fa5b4: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FA5B4u;
    {
        const bool branch_taken_0x2fa5b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5b4) {
            ctx->pc = 0x2FA5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA5B4u;
            // 0x2fa5b8: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA5F0u;
            goto label_2fa5f0;
        }
    }
    ctx->pc = 0x2FA5BCu;
    // 0x2fa5bc: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2fa5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2fa5c0: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2fa5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2fa5c4: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x2fa5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2fa5c8: 0x24c606d8  addiu       $a2, $a2, 0x6D8
    ctx->pc = 0x2fa5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1752));
    // 0x2fa5cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fa5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5d0: 0xc0c8eaa  jal         func_323AA8
    ctx->pc = 0x2FA5D0u;
    SET_GPR_U32(ctx, 31, 0x2FA5D8u);
    ctx->pc = 0x2FA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5D0u;
    // 0x2fa5d4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AA8u, 0x2FA5D0u, 0x2FA5D8u)) {
        return;
    }
    ctx->pc = 0x2FA5D8u;
label_2fa5d8:
    // 0x2fa5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5dc: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FA5DCu;
    SET_GPR_U32(ctx, 31, 0x2FA5E4u);
    ctx->pc = 0x2FA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5DCu;
    // 0x2fa5e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FA5DCu, 0x2FA5E4u)) {
        return;
    }
    ctx->pc = 0x2FA5E4u;
label_2fa5e4:
    // 0x2fa5e4: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FA5E4u;
    {
        const bool branch_taken_0x2fa5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5E4u;
        // 0x2fa5e8: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5e4) {
            ctx->pc = 0x2FA66Cu;
            goto label_2fa66c;
        }
    }
    ctx->pc = 0x2FA5ECu;
    // 0x2fa5ec: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x2fa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2fa5f0:
    // 0x2fa5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa5f4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FA5F4u;
    {
        const bool branch_taken_0x2fa5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5F4u;
        // 0x2fa5f8: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5f4) {
            ctx->pc = 0x2FA66Cu;
            goto label_2fa66c;
        }
    }
    ctx->pc = 0x2FA5FCu;
    // 0x2fa5fc: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x2fa5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2fa600: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FA600u;
    {
        const bool branch_taken_0x2fa600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa600) {
            ctx->pc = 0x2FA604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA600u;
            // 0x2fa604: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA670u;
            goto label_2fa670;
        }
    }
    ctx->pc = 0x2FA608u;
    // 0x2fa608: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2fa608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fa60c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fa60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fa610: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2fa610u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2fa614: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2fa614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2fa618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA618u;
    {
        const bool branch_taken_0x2fa618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA618u;
        // 0x2fa61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa618) {
            ctx->pc = 0x2FA630u;
            goto label_2fa630;
        }
    }
    ctx->pc = 0x2FA620u;
    // 0x2fa620: 0xc0bea6a  jal         func_2FA9A8
    ctx->pc = 0x2FA620u;
    SET_GPR_U32(ctx, 31, 0x2FA628u);
    ctx->pc = 0x2FA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA620u;
    // 0x2fa624: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA9A8u, 0x2FA620u, 0x2FA628u)) {
        return;
    }
    ctx->pc = 0x2FA628u;
label_2fa628:
    // 0x2fa628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA628u;
    {
        const bool branch_taken_0x2fa628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA628u;
        // 0x2fa62c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa628) {
            ctx->pc = 0x2FA63Cu;
            goto label_2fa63c;
        }
    }
    ctx->pc = 0x2FA630u;
label_2fa630:
    // 0x2fa630: 0xc0be74a  jal         func_2F9D28
    ctx->pc = 0x2FA630u;
    SET_GPR_U32(ctx, 31, 0x2FA638u);
    ctx->pc = 0x2FA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA630u;
    // 0x2fa634: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9D28u, 0x2FA630u, 0x2FA638u)) {
        return;
    }
    ctx->pc = 0x2FA638u;
label_2fa638:
    // 0x2fa638: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2fa638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2fa63c:
    // 0x2fa63c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fa63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa640: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fa640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fa644: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2fa644u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2fa648: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fa648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fa64c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA64Cu;
    {
        const bool branch_taken_0x2fa64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA64Cu;
        // 0x2fa650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa64c) {
            ctx->pc = 0x2FA664u;
            goto label_2fa664;
        }
    }
    ctx->pc = 0x2FA654u;
    // 0x2fa654: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2fa654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2fa658: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x2fa658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x2fa65c: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x2fa65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x2fa660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa664:
    // 0x2fa664: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x2fa664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x2fa668: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x2fa668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2fa66c:
    // 0x2fa66c: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x2fa66cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2fa670:
    // 0x2fa670: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x2fa670u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2fa674: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2fa674u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2fa678: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x2fa678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fa67c: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x2fa67cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2fa680: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x2fa680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2fa684: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x2fa684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2fa688: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x2fa688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2fa68c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2fa68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fa690: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA690u;
        // 0x2fa694: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA698u;
}
