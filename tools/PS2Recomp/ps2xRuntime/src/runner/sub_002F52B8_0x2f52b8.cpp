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

// Function: sub_002F52B8
// Address: 0x2f52b8 - 0x2f5898
void sub_002F52B8_0x2f52b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52B8_0x2f52b8");
#endif

    switch (ctx->pc) {
        case 0x2f52fcu: goto label_2f52fc;
        case 0x2f531cu: goto label_2f531c;
        case 0x2f5340u: goto label_2f5340;
        case 0x2f5404u: goto label_2f5404;
        case 0x2f5424u: goto label_2f5424;
        case 0x2f5474u: goto label_2f5474;
        case 0x2f5480u: goto label_2f5480;
        case 0x2f549cu: goto label_2f549c;
        case 0x2f54b4u: goto label_2f54b4;
        case 0x2f5574u: goto label_2f5574;
        case 0x2f5584u: goto label_2f5584;
        case 0x2f5594u: goto label_2f5594;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55fcu: goto label_2f55fc;
        case 0x2f5624u: goto label_2f5624;
        case 0x2f5638u: goto label_2f5638;
        case 0x2f5654u: goto label_2f5654;
        case 0x2f5674u: goto label_2f5674;
        case 0x2f5688u: goto label_2f5688;
        case 0x2f56c0u: goto label_2f56c0;
        case 0x2f56ecu: goto label_2f56ec;
        case 0x2f570cu: goto label_2f570c;
        case 0x2f572cu: goto label_2f572c;
        case 0x2f5808u: goto label_2f5808;
        case 0x2f5820u: goto label_2f5820;
        case 0x2f5830u: goto label_2f5830;
        case 0x2f584cu: goto label_2f584c;
        default: break;
    }

    ctx->pc = 0x2f52b8u;

    // 0x2f52b8: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x2f52b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x2f52bc: 0xffb302e0  sd          $s3, 0x2E0($sp)
    ctx->pc = 0x2f52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 19));
    // 0x2f52c0: 0xffb70320  sd          $s7, 0x320($sp)
    ctx->pc = 0x2f52c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 23));
    // 0x2f52c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f52c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52c8: 0xffb402f0  sd          $s4, 0x2F0($sp)
    ctx->pc = 0x2f52c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 20));
    // 0x2f52cc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2f52ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52d0: 0xffb202d0  sd          $s2, 0x2D0($sp)
    ctx->pc = 0x2f52d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 18));
    // 0x2f52d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f52d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52d8: 0xffb102c0  sd          $s1, 0x2C0($sp)
    ctx->pc = 0x2f52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 17));
    // 0x2f52dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f52dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52e0: 0xffbf0340  sd          $ra, 0x340($sp)
    ctx->pc = 0x2f52e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
    // 0x2f52e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f52e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52e8: 0xffbe0330  sd          $fp, 0x330($sp)
    ctx->pc = 0x2f52e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 30));
    // 0x2f52ec: 0xffb60310  sd          $s6, 0x310($sp)
    ctx->pc = 0x2f52ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 22));
    // 0x2f52f0: 0xffb50300  sd          $s5, 0x300($sp)
    ctx->pc = 0x2f52f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 21));
    // 0x2f52f4: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F52F4u;
    SET_GPR_U32(ctx, 31, 0x2F52FCu);
    ctx->pc = 0x2F52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52F4u;
    // 0x2f52f8: 0xffb002b0  sd          $s0, 0x2B0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F52F4u, 0x2F52FCu)) {
        return;
    }
    ctx->pc = 0x2F52FCu;
label_2f52fc:
    // 0x2f52fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f52fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5300: 0x14600158  bnez        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x2F5300u;
    {
        const bool branch_taken_0x2f5300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5300u;
        // 0x2f5304: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5300) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5308u;
    // 0x2f5308: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2f5308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f530c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f530cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5314: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F5314u;
    SET_GPR_U32(ctx, 31, 0x2F531Cu);
    ctx->pc = 0x2F5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5314u;
    // 0x2f5318: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F5314u, 0x2F531Cu)) {
        return;
    }
    ctx->pc = 0x2F531Cu;
label_2f531c:
    // 0x2f531c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f531cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5320: 0x14600150  bnez        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x2F5320u;
    {
        const bool branch_taken_0x2f5320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5320u;
        // 0x2f5324: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5320) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5328u;
    // 0x2f5328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f532c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5330: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f5330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5334: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2f5334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2f5338: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F5338u;
    SET_GPR_U32(ctx, 31, 0x2F5340u);
    ctx->pc = 0x2F533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5338u;
    // 0x2f533c: 0x27a80294  addiu       $t0, $sp, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F5338u, 0x2F5340u)) {
        return;
    }
    ctx->pc = 0x2F5340u;
label_2f5340:
    // 0x2f5340: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5348: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f534c: 0x14830145  bne         $a0, $v1, . + 4 + (0x145 << 2)
    ctx->pc = 0x2F534Cu;
    {
        const bool branch_taken_0x2f534c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F534Cu;
        // 0x2f5350: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f534c) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5354u;
    // 0x2f5354: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x2f5354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5358: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F5358u;
    {
        const bool branch_taken_0x2f5358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5358u;
        // 0x2f535c: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5358) {
            ctx->pc = 0x2F5394u;
            goto label_2f5394;
        }
    }
    ctx->pc = 0x2F5360u;
    // 0x2f5360: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2f5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f5364: 0x3083f000  andi        $v1, $a0, 0xF000
    ctx->pc = 0x2f5364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x2f5368: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5368u;
    {
        const bool branch_taken_0x2f5368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5368u;
        // 0x2f536c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5368) {
            ctx->pc = 0x2F537Cu;
            goto label_2f537c;
        }
    }
    ctx->pc = 0x2F5370u;
    // 0x2f5370: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x2f5370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2f5374: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5374u;
    {
        const bool branch_taken_0x2f5374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5374) {
            ctx->pc = 0x2F5394u;
            goto label_2f5394;
        }
    }
    ctx->pc = 0x2F537Cu;
label_2f537c:
    // 0x2f537c: 0x30a30f00  andi        $v1, $a1, 0xF00
    ctx->pc = 0x2f537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x2f5380: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2f5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f5384: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5384u;
    {
        const bool branch_taken_0x2f5384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5384) {
            ctx->pc = 0x2F5388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5384u;
            // 0x2f5388: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53A0u;
            goto label_2f53a0;
        }
    }
    ctx->pc = 0x2F538Cu;
    // 0x2f538c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F538Cu;
    {
        const bool branch_taken_0x2f538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f538c) {
            ctx->pc = 0x2F5390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F538Cu;
            // 0x2f5390: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53A0u;
            goto label_2f53a0;
        }
    }
    ctx->pc = 0x2F5394u;
label_2f5394:
    // 0x2f5394: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5398: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2F5398u;
    {
        const bool branch_taken_0x2f5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5398u;
        // 0x2f539c: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5398) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F53A0u;
label_2f53a0:
    // 0x2f53a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F53A0u;
    {
        const bool branch_taken_0x2f53a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53a0) {
            ctx->pc = 0x2F53A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F53A0u;
            // 0x2f53a4: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53B4u;
            goto label_2f53b4;
        }
    }
    ctx->pc = 0x2F53A8u;
    // 0x2f53a8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f53ac: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x2F53ACu;
    {
        const bool branch_taken_0x2f53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ACu;
        // 0x2f53b0: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53ac) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F53B4u;
label_2f53b4:
    // 0x2f53b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F53B4u;
    {
        const bool branch_taken_0x2f53b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53b4) {
            ctx->pc = 0x2F53B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F53B4u;
            // 0x2f53b8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53C8u;
            goto label_2f53c8;
        }
    }
    ctx->pc = 0x2F53BCu;
    // 0x2f53bc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f53c0: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2F53C0u;
    {
        const bool branch_taken_0x2f53c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C0u;
        // 0x2f53c4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53c0) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F53C8u;
label_2f53c8:
    // 0x2f53c8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2f53c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f53cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F53CCu;
    {
        const bool branch_taken_0x2f53cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53cc) {
            ctx->pc = 0x2F53D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F53CCu;
            // 0x2f53d0: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E0u;
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F53D4u;
    // 0x2f53d4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f53d8: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2F53D8u;
    {
        const bool branch_taken_0x2f53d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53D8u;
        // 0x2f53dc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53d8) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F53E0u;
label_2f53e0:
    // 0x2f53e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f53e4: 0x244403ff  addiu       $a0, $v0, 0x3FF
    ctx->pc = 0x2f53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2f53e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2f53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f53ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2f53ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f53f0: 0x244207fe  addiu       $v0, $v0, 0x7FE
    ctx->pc = 0x2f53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2046));
    // 0x2f53f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2f53f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2f53f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f53f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53fc: 0xc0bcab6  jal         func_2F2AD8
    ctx->pc = 0x2F53FCu;
    SET_GPR_U32(ctx, 31, 0x2F5404u);
    ctx->pc = 0x2F5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53FCu;
    // 0x2f5400: 0x28a83  sra         $s1, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2AD8u, 0x2F53FCu, 0x2F5404u)) {
        return;
    }
    ctx->pc = 0x2F5404u;
label_2f5404:
    // 0x2f5404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5408: 0x6000117  bltz        $s0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2F5408u;
    {
        const bool branch_taken_0x2f5408 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2F540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5408u;
        // 0x2f540c: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5408) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5410u;
    // 0x2f5410: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2f5410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5414: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F5414u;
    {
        const bool branch_taken_0x2f5414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5414u;
        // 0x2f5418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5414) {
            ctx->pc = 0x2F5450u;
            goto label_2f5450;
        }
    }
    ctx->pc = 0x2F541Cu;
    // 0x2f541c: 0xc0bca20  jal         func_2F2880
    ctx->pc = 0x2F541Cu;
    SET_GPR_U32(ctx, 31, 0x2F5424u);
    ctx->pc = 0x2F5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F541Cu;
    // 0x2f5420: 0x27a50298  addiu       $a1, $sp, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2880u, 0x2F541Cu, 0x2F5424u)) {
        return;
    }
    ctx->pc = 0x2F5424u;
label_2f5424:
    // 0x2f5424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5428: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2f5428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f542c: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2F542Cu;
    {
        const bool branch_taken_0x2f542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F542Cu;
        // 0x2f5430: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f542c) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5434u;
    // 0x2f5434: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x2f5434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f5438: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f5438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f543c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F543Cu;
    {
        const bool branch_taken_0x2f543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f543c) {
            ctx->pc = 0x2F5450u;
            goto label_2f5450;
        }
    }
    ctx->pc = 0x2F5444u;
    // 0x2f5444: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5448: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2F5448u;
    {
        const bool branch_taken_0x2f5448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5448u;
        // 0x2f544c: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5448) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5450u;
label_2f5450:
    // 0x2f5450: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5454: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2f5454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f545c: 0x14a20051  bne         $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F545Cu;
    {
        const bool branch_taken_0x2f545c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F545Cu;
        // 0x2f5460: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f545c) {
            ctx->pc = 0x2F55A4u;
            goto label_2f55a4;
        }
    }
    ctx->pc = 0x2F5464u;
    // 0x2f5464: 0x27b00298  addiu       $s0, $sp, 0x298
    ctx->pc = 0x2f5464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2f5468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f546c: 0xc0bc9d4  jal         func_2F2750
    ctx->pc = 0x2F546Cu;
    SET_GPR_U32(ctx, 31, 0x2F5474u);
    ctx->pc = 0x2F5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F546Cu;
    // 0x2f5470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2750u, 0x2F546Cu, 0x2F5474u)) {
        return;
    }
    ctx->pc = 0x2F5474u;
label_2f5474:
    // 0x2f5474: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2f5474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f5478: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5478u;
    {
        const bool branch_taken_0x2f5478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5478u;
        // 0x2f547c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5478) {
            ctx->pc = 0x2F5488u;
            goto label_2f5488;
        }
    }
    ctx->pc = 0x2F5480u;
label_2f5480:
    // 0x2f5480: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F5480u;
    {
        const bool branch_taken_0x2f5480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5480u;
        // 0x2f5484: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5480) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5488u;
label_2f5488:
    // 0x2f5488: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f5488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f548c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5494: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F5494u;
    SET_GPR_U32(ctx, 31, 0x2F549Cu);
    ctx->pc = 0x2F5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5494u;
    // 0x2f5498: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F5494u, 0x2F549Cu)) {
        return;
    }
    ctx->pc = 0x2F549Cu;
label_2f549c:
    // 0x2f549c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2f549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f54a0: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2F54A0u;
    {
        const bool branch_taken_0x2f54a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54A0u;
        // 0x2f54a4: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54a0) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F54A8u;
    // 0x2f54a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54ac: 0xc0bde18  jal         func_2F7860
    ctx->pc = 0x2F54ACu;
    SET_GPR_U32(ctx, 31, 0x2F54B4u);
    ctx->pc = 0x2F54B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54ACu;
    // 0x2f54b0: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7860u, 0x2F54ACu, 0x2F54B4u)) {
        return;
    }
    ctx->pc = 0x2F54B4u;
label_2f54b4:
    // 0x2f54b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f54b8: 0x75182a  slt         $v1, $v1, $s5
    ctx->pc = 0x2f54b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f54bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F54BCu;
    {
        const bool branch_taken_0x2f54bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54BCu;
        // 0x2f54c0: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54bc) {
            ctx->pc = 0x2F54C8u;
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F54C4u;
    // 0x2f54c4: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x2f54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_2f54c8:
    // 0x2f54c8: 0x93a50287  lbu         $a1, 0x287($sp)
    ctx->pc = 0x2f54c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x2f54cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f54d0: 0x93a70282  lbu         $a3, 0x282($sp)
    ctx->pc = 0x2f54d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x2f54d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f54d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54d8: 0x93a60281  lbu         $a2, 0x281($sp)
    ctx->pc = 0x2f54d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x2f54dc: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x2f54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f54e0: 0x93af0286  lbu         $t7, 0x286($sp)
    ctx->pc = 0x2f54e0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x2f54e4: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2f54e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f54e8: 0x93ae0285  lbu         $t6, 0x285($sp)
    ctx->pc = 0x2f54e8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x2f54ec: 0x64102  srl         $t0, $a2, 4
    ctx->pc = 0x2f54ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f54f0: 0x93ac0283  lbu         $t4, 0x283($sp)
    ctx->pc = 0x2f54f0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x2f54f4: 0xf6902  srl         $t5, $t7, 4
    ctx->pc = 0x2f54f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 4));
    // 0x2f54f8: 0xe4902  srl         $t1, $t6, 4
    ctx->pc = 0x2f54f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2f54fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f54fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f5500: 0xc5102  srl         $t2, $t4, 4
    ctx->pc = 0x2f5500u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f5504: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x2f5504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f5508: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2f5508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f550c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f550cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f5510: 0x1a36818  mult        $t5, $t5, $v1
    ctx->pc = 0x2f5510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2f5514: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f5514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f5518: 0x71234818  mult1       $t1, $t1, $v1
    ctx->pc = 0x2f5518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f551c: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f551cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f5520: 0x71435018  mult1       $t2, $t2, $v1
    ctx->pc = 0x2f5520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f5524: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f5528: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2f5528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f552c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2f552cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2f5530: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x2f5530u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x2f5534: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f5534u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f5538: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f5538u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f553c: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x2f553cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2f5540: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x2f5540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2f5544: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2f5544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2f5548: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f554c: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x2f554cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f5550: 0x8fa70294  lw          $a3, 0x294($sp)
    ctx->pc = 0x2f5550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2f5554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5558: 0xa7a2001e  sh          $v0, 0x1E($sp)
    ctx->pc = 0x2f5558u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f555c: 0xa3ad001d  sb          $t5, 0x1D($sp)
    ctx->pc = 0x2f555cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 13));
    // 0x2f5560: 0xa3a9001c  sb          $t1, 0x1C($sp)
    ctx->pc = 0x2f5560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f5564: 0xa3aa001b  sb          $t2, 0x1B($sp)
    ctx->pc = 0x2f5564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f5568: 0xa3ab001a  sb          $t3, 0x1A($sp)
    ctx->pc = 0x2f5568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f556c: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F556Cu;
    SET_GPR_U32(ctx, 31, 0x2F5574u);
    ctx->pc = 0x2F5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F556Cu;
    // 0x2f5570: 0xa3a80019  sb          $t0, 0x19($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F556Cu, 0x2F5574u)) {
        return;
    }
    ctx->pc = 0x2F5574u;
label_2f5574:
    // 0x2f5574: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x2F5574u;
    {
        const bool branch_taken_0x2f5574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5574u;
        // 0x2f5578: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5574) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F557Cu;
    // 0x2f557c: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F557Cu;
    SET_GPR_U32(ctx, 31, 0x2F5584u);
    ctx->pc = 0x2F5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F557Cu;
    // 0x2f5580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F557Cu, 0x2F5584u)) {
        return;
    }
    ctx->pc = 0x2F5584u;
label_2f5584:
    // 0x2f5584: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x2F5584u;
    {
        const bool branch_taken_0x2f5584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5584u;
        // 0x2f5588: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5584) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F558Cu;
    // 0x2f558c: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F558Cu;
    SET_GPR_U32(ctx, 31, 0x2F5594u);
    ctx->pc = 0x2F5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F558Cu;
    // 0x2f5590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F558Cu, 0x2F5594u)) {
        return;
    }
    ctx->pc = 0x2F5594u;
label_2f5594:
    // 0x2f5594: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2F5594u;
    {
        const bool branch_taken_0x2f5594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5594u;
        // 0x2f5598: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5594) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F559Cu;
    // 0x2f559c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2f559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f55a0: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
label_2f55a4:
    // 0x2f55a4: 0xafb702a0  sw          $s7, 0x2A0($sp)
    ctx->pc = 0x2f55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 23));
    // 0x2f55a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f55a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55ac: 0x245ec880  addiu       $fp, $v0, -0x3780
    ctx->pc = 0x2f55acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f55b0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2f55b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55b4: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2f55b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f55b8:
    // 0x2f55b8: 0x2a420400  slti        $v0, $s2, 0x400
    ctx->pc = 0x2f55b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2f55bc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F55BCu;
    {
        const bool branch_taken_0x2f55bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55BCu;
        // 0x2f55c0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55bc) {
            ctx->pc = 0x2F56B0u;
            goto label_2f56b0;
        }
    }
    ctx->pc = 0x2F55C4u;
    // 0x2f55c4: 0x1e400008  bgtz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F55C4u;
    {
        const bool branch_taken_0x2f55c4 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x2F55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C4u;
        // 0x2f55c8: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55c4) {
            ctx->pc = 0x2F55E8u;
            goto label_2f55e8;
        }
    }
    ctx->pc = 0x2F55CCu;
    // 0x2f55cc: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x2f55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2f55d0: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x2f55d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2f55d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F55D4u;
    {
        const bool branch_taken_0x2f55d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D4u;
        // 0x2f55d8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d4) {
            ctx->pc = 0x2F5604u;
            goto label_2f5604;
        }
    }
    ctx->pc = 0x2F55DCu;
    // 0x2f55dc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2f55dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f55e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F55E0u;
    {
        const bool branch_taken_0x2f55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55E0u;
        // 0x2f55e4: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55e0) {
            ctx->pc = 0x2F5604u;
            goto label_2f5604;
        }
    }
    ctx->pc = 0x2F55E8u;
label_2f55e8:
    // 0x2f55e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f55e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55ec: 0x2445c880  addiu       $a1, $v0, -0x3780
    ctx->pc = 0x2f55ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f55f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f55f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55f4: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F55F4u;
    SET_GPR_U32(ctx, 31, 0x2F55FCu);
    ctx->pc = 0x2F55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55F4u;
    // 0x2f55f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F55F4u, 0x2F55FCu)) {
        return;
    }
    ctx->pc = 0x2F55FCu;
label_2f55fc:
    // 0x2f55fc: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2F55FCu;
    {
        const bool branch_taken_0x2f55fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55fc) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F5604u;
label_2f5604:
    // 0x2f5604: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2f5604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f5608: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x2f5608u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f560c: 0xd7182a  slt         $v1, $a2, $s7
    ctx->pc = 0x2f560cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2f5610: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F5610u;
    {
        const bool branch_taken_0x2f5610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5610u;
        // 0x2f5614: 0x25e2021  addu        $a0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5610) {
            ctx->pc = 0x2F566Cu;
            goto label_2f566c;
        }
    }
    ctx->pc = 0x2F5618u;
    // 0x2f5618: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f5618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f561c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F561Cu;
    SET_GPR_U32(ctx, 31, 0x2F5624u);
    ctx->pc = 0x2F5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F561Cu;
    // 0x2f5620: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F561Cu, 0x2F5624u)) {
        return;
    }
    ctx->pc = 0x2F5624u;
label_2f5624:
    // 0x2f5624: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f5624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5628: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f5628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f562c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5630: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F5630u;
    SET_GPR_U32(ctx, 31, 0x2F5638u);
    ctx->pc = 0x2F5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5630u;
    // 0x2f5634: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F5630u, 0x2F5638u)) {
        return;
    }
    ctx->pc = 0x2F5638u;
label_2f5638:
    // 0x2f5638: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2F5638u;
    {
        const bool branch_taken_0x2f5638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5638u;
        // 0x2f563c: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5638) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F5640u;
    // 0x2f5640: 0x27b10280  addiu       $s1, $sp, 0x280
    ctx->pc = 0x2f5640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2f5644: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f564c: 0xc0bde18  jal         func_2F7860
    ctx->pc = 0x2F564Cu;
    SET_GPR_U32(ctx, 31, 0x2F5654u);
    ctx->pc = 0x2F5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F564Cu;
    // 0x2f5650: 0x2b7a821  addu        $s5, $s5, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7860u, 0x2F564Cu, 0x2F5654u)) {
        return;
    }
    ctx->pc = 0x2F5654u;
label_2f5654:
    // 0x2f5654: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f5654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f5658: 0x75182a  slt         $v1, $v1, $s5
    ctx->pc = 0x2f5658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f565c: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F565Cu;
    {
        const bool branch_taken_0x2f565c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f565c) {
            ctx->pc = 0x2F5660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F565Cu;
            // 0x2f5660: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5750u;
            goto label_2f5750;
        }
    }
    ctx->pc = 0x2F5664u;
    // 0x2f5664: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F5664u;
    {
        const bool branch_taken_0x2f5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5664u;
        // 0x2f5668: 0x93a50287  lbu         $a1, 0x287($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5664) {
            ctx->pc = 0x2F5754u;
            goto label_2f5754;
        }
    }
    ctx->pc = 0x2F566Cu;
label_2f566c:
    // 0x2f566c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F566Cu;
    SET_GPR_U32(ctx, 31, 0x2F5674u);
    ctx->pc = 0x2F5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F566Cu;
    // 0x2f5670: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F566Cu, 0x2F5674u)) {
        return;
    }
    ctx->pc = 0x2F5674u;
label_2f5674:
    // 0x2f5674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5678: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f5678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f567c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f567cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5680: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F5680u;
    SET_GPR_U32(ctx, 31, 0x2F5688u);
    ctx->pc = 0x2F5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5680u;
    // 0x2f5684: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F5680u, 0x2F5688u)) {
        return;
    }
    ctx->pc = 0x2F5688u;
label_2f5688:
    // 0x2f5688: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F5688u;
    {
        const bool branch_taken_0x2f5688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5688u;
        // 0x2f568c: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5688) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F5690u;
    // 0x2f5690: 0x26a20400  addiu       $v0, $s5, 0x400
    ctx->pc = 0x2f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x2f5694: 0x26c40400  addiu       $a0, $s6, 0x400
    ctx->pc = 0x2f5694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
    // 0x2f5698: 0x26e3fc00  addiu       $v1, $s7, -0x400
    ctx->pc = 0x2f5698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966272));
    // 0x2f569c: 0x52a823  subu        $s5, $v0, $s2
    ctx->pc = 0x2f569cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f56a0: 0x72b821  addu        $s7, $v1, $s2
    ctx->pc = 0x2f56a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2f56a4: 0x92b023  subu        $s6, $a0, $s2
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2f56a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f56a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56ac: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2f56acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f56b0:
    // 0x2f56b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f56b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f56b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56b8: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F56B8u;
    SET_GPR_U32(ctx, 31, 0x2F56C0u);
    ctx->pc = 0x2F56BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56B8u;
    // 0x2f56bc: 0x27a6029c  addiu       $a2, $sp, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F56B8u, 0x2F56C0u)) {
        return;
    }
    ctx->pc = 0x2F56C0u;
label_2f56c0:
    // 0x2f56c0: 0x8fa3029c  lw          $v1, 0x29C($sp)
    ctx->pc = 0x2f56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2f56c4: 0x1460ff6e  bnez        $v1, . + 4 + (-0x92 << 2)
    ctx->pc = 0x2F56C4u;
    {
        const bool branch_taken_0x2f56c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56C4u;
        // 0x2f56c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56c4) {
            ctx->pc = 0x2F5480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5480;
        }
    }
    ctx->pc = 0x2F56CCu;
    // 0x2f56cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f56d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f56d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f56d4: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F56D4u;
    {
        const bool branch_taken_0x2f56d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D4u;
        // 0x2f56d8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56d4) {
            ctx->pc = 0x2F573Cu;
            goto label_2f573c;
        }
    }
    ctx->pc = 0x2F56DCu;
    // 0x2f56dc: 0x27b00298  addiu       $s0, $sp, 0x298
    ctx->pc = 0x2f56dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
    // 0x2f56e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f56e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56e4: 0xc0bc9d4  jal         func_2F2750
    ctx->pc = 0x2F56E4u;
    SET_GPR_U32(ctx, 31, 0x2F56ECu);
    ctx->pc = 0x2F56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56E4u;
    // 0x2f56e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2750u, 0x2F56E4u, 0x2F56ECu)) {
        return;
    }
    ctx->pc = 0x2F56ECu;
label_2f56ec:
    // 0x2f56ec: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2f56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f56f0: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2F56F0u;
    {
        const bool branch_taken_0x2f56f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56F0u;
        // 0x2f56f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56f0) {
            ctx->pc = 0x2F5480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5480;
        }
    }
    ctx->pc = 0x2F56F8u;
    // 0x2f56f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f56fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5700: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f5700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5704: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F5704u;
    SET_GPR_U32(ctx, 31, 0x2F570Cu);
    ctx->pc = 0x2F5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5704u;
    // 0x2f5708: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F5704u, 0x2F570Cu)) {
        return;
    }
    ctx->pc = 0x2F570Cu;
label_2f570c:
    // 0x2f570c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2f570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f5710: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2F5710u;
    {
        const bool branch_taken_0x2f5710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5710u;
        // 0x2f5714: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5710) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5718u;
    // 0x2f5718: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2f5718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2f571c: 0x2263025  or          $a2, $s1, $a2
    ctx->pc = 0x2f571cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x2f5720: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f5720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5724: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F5724u;
    SET_GPR_U32(ctx, 31, 0x2F572Cu);
    ctx->pc = 0x2F5728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5724u;
    // 0x2f5728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F5724u, 0x2F572Cu)) {
        return;
    }
    ctx->pc = 0x2F572Cu;
label_2f572c:
    // 0x2f572c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2f572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2f5730: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F5730u;
    {
        const bool branch_taken_0x2f5730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5730u;
        // 0x2f5734: 0xdfbf0340  ld          $ra, 0x340($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5730) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5738u;
    // 0x2f5738: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f5738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2f573c:
    // 0x2f573c: 0x2643fc00  addiu       $v1, $s2, -0x400
    ctx->pc = 0x2f573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x2f5740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5744: 0x72900b  movn        $s2, $v1, $s2
    ctx->pc = 0x2f5744u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x2f5748: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
    ctx->pc = 0x2F5748u;
    {
        const bool branch_taken_0x2f5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5748u;
        // 0x2f574c: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5748) {
            ctx->pc = 0x2F55B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f55b8;
        }
    }
    ctx->pc = 0x2F5750u;
label_2f5750:
    // 0x2f5750: 0x93a50287  lbu         $a1, 0x287($sp)
    ctx->pc = 0x2f5750u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
label_2f5754:
    // 0x2f5754: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f5754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f5758: 0x93a70282  lbu         $a3, 0x282($sp)
    ctx->pc = 0x2f5758u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x2f575c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5760: 0x93a60281  lbu         $a2, 0x281($sp)
    ctx->pc = 0x2f5760u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x2f5764: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x2f5764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f5768: 0x93b00286  lbu         $s0, 0x286($sp)
    ctx->pc = 0x2f5768u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x2f576c: 0x77102  srl         $t6, $a3, 4
    ctx->pc = 0x2f576cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f5770: 0x93ab0285  lbu         $t3, 0x285($sp)
    ctx->pc = 0x2f5770u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x2f5774: 0x64902  srl         $t1, $a2, 4
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f5778: 0x93aa0283  lbu         $t2, 0x283($sp)
    ctx->pc = 0x2f5778u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x2f577c: 0x107902  srl         $t7, $s0, 4
    ctx->pc = 0x2f577cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x2f5780: 0xb6102  srl         $t4, $t3, 4
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2f5784: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f5784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f5788: 0xa6902  srl         $t5, $t2, 4
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2f578c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x2f578cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f5790: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2f5790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2f5794: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f5798: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x2f5798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2f579c: 0x97a80000  lhu         $t0, 0x0($sp)
    ctx->pc = 0x2f579cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f57a0: 0x71836018  mult1       $t4, $t4, $v1
    ctx->pc = 0x2f57a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2f57a4: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f57a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f57a8: 0x71a36818  mult1       $t5, $t5, $v1
    ctx->pc = 0x2f57a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2f57ac: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f57acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f57b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f57b4: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x2f57b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x2f57b8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2f57b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2f57bc: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2f57bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2f57c0: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x2f57c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x2f57c4: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2f57c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x2f57c8: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x2f57c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2f57cc: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x2f57ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2f57d0: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x2f57d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2f57d4: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x2f57d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x2f57d8: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f57dc: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x2f57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f57e0: 0x8fa70294  lw          $a3, 0x294($sp)
    ctx->pc = 0x2f57e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2f57e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f57e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57e8: 0xa7a80000  sh          $t0, 0x0($sp)
    ctx->pc = 0x2f57e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2f57ec: 0xa7a2001e  sh          $v0, 0x1E($sp)
    ctx->pc = 0x2f57ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f57f0: 0xa3af001d  sb          $t7, 0x1D($sp)
    ctx->pc = 0x2f57f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 15));
    // 0x2f57f4: 0xa3ac001c  sb          $t4, 0x1C($sp)
    ctx->pc = 0x2f57f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f57f8: 0xa3ad001b  sb          $t5, 0x1B($sp)
    ctx->pc = 0x2f57f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 13));
    // 0x2f57fc: 0xa3ae001a  sb          $t6, 0x1A($sp)
    ctx->pc = 0x2f57fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f5800: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F5800u;
    SET_GPR_U32(ctx, 31, 0x2F5808u);
    ctx->pc = 0x2F5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5800u;
    // 0x2f5804: 0xa3a90019  sb          $t1, 0x19($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F5800u, 0x2F5808u)) {
        return;
    }
    ctx->pc = 0x2F5808u;
label_2f5808:
    // 0x2f5808: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F5808u;
    {
        const bool branch_taken_0x2f5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5808u;
        // 0x2f580c: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5808) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5810u;
    // 0x2f5810: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f5814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f5814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5818: 0xc0bd240  jal         func_2F4900
    ctx->pc = 0x2F5818u;
    SET_GPR_U32(ctx, 31, 0x2F5820u);
    ctx->pc = 0x2F581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5818u;
    // 0x2f581c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4900u, 0x2F5818u, 0x2F5820u)) {
        return;
    }
    ctx->pc = 0x2F5820u;
label_2f5820:
    // 0x2f5820: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5820u;
    {
        const bool branch_taken_0x2f5820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5820u;
        // 0x2f5824: 0xafa20298  sw          $v0, 0x298($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5820) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5828u;
    // 0x2f5828: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F5828u;
    SET_GPR_U32(ctx, 31, 0x2F5830u);
    ctx->pc = 0x2F582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5828u;
    // 0x2f582c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F5828u, 0x2F5830u)) {
        return;
    }
    ctx->pc = 0x2F5830u;
label_2f5830:
    // 0x2f5830: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5830u;
    {
        const bool branch_taken_0x2f5830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5830u;
        // 0x2f5834: 0xafa2029c  sw          $v0, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5830) {
            ctx->pc = 0x2F5844u;
            goto label_2f5844;
        }
    }
    ctx->pc = 0x2F5838u;
label_2f5838:
    // 0x2f5838: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f583c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F583Cu;
    {
        const bool branch_taken_0x2f583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F583Cu;
        // 0x2f5840: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f583c) {
            ctx->pc = 0x2F5864u;
            goto label_2f5864;
        }
    }
    ctx->pc = 0x2F5844u;
label_2f5844:
    // 0x2f5844: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F5844u;
    SET_GPR_U32(ctx, 31, 0x2F584Cu);
    ctx->pc = 0x2F5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5844u;
    // 0x2f5848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F5844u, 0x2F584Cu)) {
        return;
    }
    ctx->pc = 0x2F584Cu;
label_2f584c:
    // 0x2f584c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5850: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x2f5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f5854: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f5854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f5858: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x2f5858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x2f585c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2f585cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x2f5860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f5860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5864:
    // 0x2f5864: 0xdfbf0340  ld          $ra, 0x340($sp)
    ctx->pc = 0x2f5864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_2f5868:
    // 0x2f5868: 0xdfbe0330  ld          $fp, 0x330($sp)
    ctx->pc = 0x2f5868u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2f586c: 0xdfb70320  ld          $s7, 0x320($sp)
    ctx->pc = 0x2f586cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2f5870: 0xdfb60310  ld          $s6, 0x310($sp)
    ctx->pc = 0x2f5870u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2f5874: 0xdfb50300  ld          $s5, 0x300($sp)
    ctx->pc = 0x2f5874u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2f5878: 0xdfb402f0  ld          $s4, 0x2F0($sp)
    ctx->pc = 0x2f5878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2f587c: 0xdfb302e0  ld          $s3, 0x2E0($sp)
    ctx->pc = 0x2f587cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2f5880: 0xdfb202d0  ld          $s2, 0x2D0($sp)
    ctx->pc = 0x2f5880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2f5884: 0xdfb102c0  ld          $s1, 0x2C0($sp)
    ctx->pc = 0x2f5884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f5888: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x2f5888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f588c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F588Cu;
        // 0x2f5890: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F588Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5894u;
    // 0x2f5894: 0x0  nop
    ctx->pc = 0x2f5894u;
    // NOP
    ctx->pc = 0x2f5898u;
}
