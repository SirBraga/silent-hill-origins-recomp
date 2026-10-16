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

// Function: sub_002F9FB8
// Address: 0x2f9fb8 - 0x2fa278
void sub_002F9FB8_0x2f9fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9FB8_0x2f9fb8");
#endif

    switch (ctx->pc) {
        case 0x2fa050u: goto label_2fa050;
        case 0x2fa1e0u: goto label_2fa1e0;
        case 0x2fa1ecu: goto label_2fa1ec;
        case 0x2fa218u: goto label_2fa218;
        case 0x2fa228u: goto label_2fa228;
        default: break;
    }

    ctx->pc = 0x2f9fb8u;

    // 0x2f9fb8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2f9fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2f9fbc: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x2f9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x2f9fc0: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2f9fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x2f9fc4: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x2f9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x2f9fc8: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x2f9fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2f9fcc: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2f9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2f9fd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f9fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fd4: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2f9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2f9fd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fdc: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x2f9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2f9fe0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2f9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2f9fe4: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2f9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2f9fe8: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x2f9fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x2f9fec: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x2f9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2f9ff0: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x2f9ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2f9ff4: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x2f9ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x2f9ff8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9FF8u;
    {
        const bool branch_taken_0x2f9ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FF8u;
        // 0x2f9ffc: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ff8) {
            ctx->pc = 0x2FA088u;
            goto label_2fa088;
        }
    }
    ctx->pc = 0x2FA000u;
    // 0x2fa000: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x2fa000u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2fa004: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FA004u;
    {
        const bool branch_taken_0x2fa004 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2fa004) {
            ctx->pc = 0x2FA008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA004u;
            // 0x2fa008: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2FA00Cu;
    // 0x2fa00c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2fa00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2fa010: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FA010u;
    {
        const bool branch_taken_0x2fa010 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa010) {
            ctx->pc = 0x2FA014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA010u;
            // 0x2fa014: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2FA018u;
    // 0x2fa018: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x2fa018u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2fa01c: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x2fa01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa020: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2fa020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa024: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2fa024u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fa028: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x2fa028u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa02c: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x2fa02cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2fa030: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2fa030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2fa034: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x2fa034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2fa038: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2fa038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fa03c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fa03cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fa040: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2fa040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2fa044: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2fa044u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2fa048: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2FA048u;
    SET_GPR_U32(ctx, 31, 0x2FA050u);
    ctx->pc = 0x2FA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA048u;
    // 0x2fa04c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2FA048u, 0x2FA050u)) {
        return;
    }
    ctx->pc = 0x2FA050u;
label_2fa050:
    // 0x2fa050: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x2fa050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x2fa054: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa058: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x2fa058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2fa05c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2fa05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2fa060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa064: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x2fa064u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x2fa068: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x2fa068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2fa06c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2fa06cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2fa070: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA070u;
    {
        const bool branch_taken_0x2fa070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA070u;
        // 0x2fa074: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa070) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2FA078u;
    // 0x2fa078: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2fa078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2fa07c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fa080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA080u;
    {
        const bool branch_taken_0x2fa080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA080u;
        // 0x2fa084: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa080) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2FA088u;
label_2fa088:
    // 0x2fa088: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x2fa088u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2fa08c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x2fa08cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_2fa090:
    // 0x2fa090: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x2fa090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2fa094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa098: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA098u;
    {
        const bool branch_taken_0x2fa098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa098) {
            ctx->pc = 0x2FA09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA098u;
            // 0x2fa09c: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA0C0u;
            goto label_2fa0c0;
        }
    }
    ctx->pc = 0x2FA0A0u;
    // 0x2fa0a0: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2fa0a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2fa0a4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA0A4u;
    {
        const bool branch_taken_0x2fa0a4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2fa0a4) {
            ctx->pc = 0x2FA0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA0A4u;
            // 0x2fa0a8: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA0C0u;
            goto label_2fa0c0;
        }
    }
    ctx->pc = 0x2FA0ACu;
    // 0x2fa0ac: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x2fa0acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x2fa0b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa0b4: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2fa0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x2fa0b8: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x2fa0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x2fa0bc: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x2fa0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2fa0c0:
    // 0x2fa0c0: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x2fa0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x2fa0c4: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2fa0c8: 0x250866a8  addiu       $t0, $t0, 0x66A8
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26280));
    // 0x2fa0cc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2fa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2fa0d0: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x2fa0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x2fa0d4: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x2fa0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2fa0d8: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x2fa0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x2fa0dc: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x2fa0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2fa0e0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2fa0e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2fa0e4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x2fa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2fa0e8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fa0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fa0ec: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x2fa0ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2fa0f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fa0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fa0f4: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2fa0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2fa0f8: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x2fa0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x2fa0fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fa0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fa100: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2fa100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2fa104: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x2fa104u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x2fa108: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fa108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fa10c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x2fa10cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2fa110: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x2fa110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2fa114: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x2fa114u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2fa118: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2fa118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fa11c: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x2fa11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x2fa120: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa124: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x2fa124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x2fa128: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2fa128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2fa12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fa130: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x2fa130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2fa134: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fa138: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x2fa138u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa13c: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x2fa13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x2fa140: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x2fa140u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x2fa144: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2fa144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2fa148: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x2fa148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x2fa14c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x2fa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2fa150: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x2fa150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x2fa154: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2fa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2fa158: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x2fa158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x2fa15c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2fa15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2fa160: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x2fa160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x2fa164: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2fa164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2fa168: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x2fa168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x2fa16c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2fa170: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x2fa170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x2fa174: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2fa174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2fa178: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA178u;
    {
        const bool branch_taken_0x2fa178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA178u;
        // 0x2fa17c: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa178) {
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA180u;
    // 0x2fa180: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2fa180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2fa184: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2fa184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fa188: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fa188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa18c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA18Cu;
    {
        const bool branch_taken_0x2fa18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA18Cu;
        // 0x2fa190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa18c) {
            ctx->pc = 0x2FA1BCu;
            goto label_2fa1bc;
        }
    }
    ctx->pc = 0x2FA194u;
    // 0x2fa194: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2fa194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2fa198: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2fa198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fa19c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA19Cu;
    {
        const bool branch_taken_0x2fa19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA19Cu;
        // 0x2fa1a0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa19c) {
            ctx->pc = 0x2FA1BCu;
            goto label_2fa1bc;
        }
    }
    ctx->pc = 0x2FA1A4u;
label_2fa1a4:
    // 0x2fa1a4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2fa1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2fa1a8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2fa1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2fa1ac: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x2fa1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2fa1b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2fa1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fa1b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fa1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa1b8: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x2fa1b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fa1bc:
    // 0x2fa1bc: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FA1BCu;
    {
        const bool branch_taken_0x2fa1bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1bc) {
            ctx->pc = 0x2FA1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA1BCu;
            // 0x2fa1c0: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1F8u;
            goto label_2fa1f8;
        }
    }
    ctx->pc = 0x2FA1C4u;
    // 0x2fa1c4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2fa1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2fa1c8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fa1cc: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2fa1d0: 0x24c606d8  addiu       $a2, $a2, 0x6D8
    ctx->pc = 0x2fa1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1752));
    // 0x2fa1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fa1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1d8: 0xc0c8eaa  jal         func_323AA8
    ctx->pc = 0x2FA1D8u;
    SET_GPR_U32(ctx, 31, 0x2FA1E0u);
    ctx->pc = 0x2FA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1D8u;
    // 0x2fa1dc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AA8u, 0x2FA1D8u, 0x2FA1E0u)) {
        return;
    }
    ctx->pc = 0x2FA1E0u;
label_2fa1e0:
    // 0x2fa1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1e4: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FA1E4u;
    SET_GPR_U32(ctx, 31, 0x2FA1ECu);
    ctx->pc = 0x2FA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1E4u;
    // 0x2fa1e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FA1E4u, 0x2FA1ECu)) {
        return;
    }
    ctx->pc = 0x2FA1ECu;
label_2fa1ec:
    // 0x2fa1ec: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FA1ECu;
    {
        const bool branch_taken_0x2fa1ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1ECu;
        // 0x2fa1f0: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1ec) {
            ctx->pc = 0x2FA250u;
            goto label_2fa250;
        }
    }
    ctx->pc = 0x2FA1F4u;
    // 0x2fa1f4: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2fa1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2fa1f8:
    // 0x2fa1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa1fc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FA1FCu;
    {
        const bool branch_taken_0x2fa1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1FCu;
        // 0x2fa200: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1fc) {
            ctx->pc = 0x2FA250u;
            goto label_2fa250;
        }
    }
    ctx->pc = 0x2FA204u;
    // 0x2fa204: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2fa208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA208u;
    {
        const bool branch_taken_0x2fa208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA208u;
        // 0x2fa20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa208) {
            ctx->pc = 0x2FA220u;
            goto label_2fa220;
        }
    }
    ctx->pc = 0x2FA210u;
    // 0x2fa210: 0xc0bea6a  jal         func_2FA9A8
    ctx->pc = 0x2FA210u;
    SET_GPR_U32(ctx, 31, 0x2FA218u);
    ctx->pc = 0x2FA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA210u;
    // 0x2fa214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA9A8u, 0x2FA210u, 0x2FA218u)) {
        return;
    }
    ctx->pc = 0x2FA218u;
label_2fa218:
    // 0x2fa218: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA218u;
    {
        const bool branch_taken_0x2fa218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA218u;
        // 0x2fa21c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa218) {
            ctx->pc = 0x2FA22Cu;
            goto label_2fa22c;
        }
    }
    ctx->pc = 0x2FA220u;
label_2fa220:
    // 0x2fa220: 0xc0be74a  jal         func_2F9D28
    ctx->pc = 0x2FA220u;
    SET_GPR_U32(ctx, 31, 0x2FA228u);
    ctx->pc = 0x2FA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA220u;
    // 0x2fa224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9D28u, 0x2FA220u, 0x2FA228u)) {
        return;
    }
    ctx->pc = 0x2FA228u;
label_2fa228:
    // 0x2fa228: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2fa228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2fa22c:
    // 0x2fa22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fa22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa230: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA230u;
    {
        const bool branch_taken_0x2fa230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA230u;
        // 0x2fa234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa230) {
            ctx->pc = 0x2FA248u;
            goto label_2fa248;
        }
    }
    ctx->pc = 0x2FA238u;
    // 0x2fa238: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2fa23c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2fa23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2fa240: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x2fa240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x2fa244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa248:
    // 0x2fa248: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x2fa248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x2fa24c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2fa24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2fa250:
    // 0x2fa250: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x2fa250u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2fa254: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x2fa254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fa258: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x2fa258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2fa25c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2fa25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2fa260: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x2fa260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2fa264: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2fa264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2fa268: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2fa268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fa26c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2fa26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fa270: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA270u;
        // 0x2fa274: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA278u;
}
