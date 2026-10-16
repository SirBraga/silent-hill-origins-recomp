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

// Function: sub_002FB278
// Address: 0x2fb278 - 0x2fb920
void sub_002FB278_0x2fb278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB278_0x2fb278");
#endif

    switch (ctx->pc) {
        case 0x2fb2b0u: goto label_2fb2b0;
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb4f8u: goto label_2fb4f8;
        case 0x2fb588u: goto label_2fb588;
        case 0x2fb610u: goto label_2fb610;
        case 0x2fb6a0u: goto label_2fb6a0;
        case 0x2fb730u: goto label_2fb730;
        case 0x2fb7c0u: goto label_2fb7c0;
        case 0x2fb840u: goto label_2fb840;
        case 0x2fb870u: goto label_2fb870;
        case 0x2fb908u: goto label_2fb908;
        default: break;
    }

    ctx->pc = 0x2fb278u;

    // 0x2fb278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb27c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fb27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb284: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb288: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb28c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb290: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2fb290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2fb294: 0x2463ffde  addiu       $v1, $v1, -0x22
    ctx->pc = 0x2fb294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967262));
    // 0x2fb298: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb298u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb29c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb29cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb2a0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB2A0u;
    {
        const bool branch_taken_0x2fb2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2A0u;
        // 0x2fb2a4: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2a0) {
            ctx->pc = 0x2FB304u;
            goto label_2fb304;
        }
    }
    ctx->pc = 0x2FB2A8u;
    // 0x2fb2a8: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb2ac: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb2acu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_2fb2b0:
    // 0x2fb2b0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb2b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb2b8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb2bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb2c0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb2c4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb2c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb2c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb2cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb2d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb2d4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb2d8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb2dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB2DCu;
    {
        const bool branch_taken_0x2fb2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2DCu;
        // 0x2fb2e0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2dc) {
            ctx->pc = 0x2FB2ECu;
            goto label_2fb2ec;
        }
    }
    ctx->pc = 0x2FB2E4u;
    // 0x2fb2e4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb2e8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb2ec:
    // 0x2fb2ec: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb2f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb2f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb2f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB2F4u;
    {
        const bool branch_taken_0x2fb2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2F4u;
        // 0x2fb2f8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2f4) {
            ctx->pc = 0x2FB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb2b0;
        }
    }
    ctx->pc = 0x2FB2FCu;
    // 0x2fb2fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB2FCu;
    {
        const bool branch_taken_0x2fb2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2FCu;
        // 0x2fb300: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2fc) {
            ctx->pc = 0x2FB30Cu;
            goto label_2fb30c;
        }
    }
    ctx->pc = 0x2FB304u;
label_2fb304:
    // 0x2fb304: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb304u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb308: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb30c:
    // 0x2fb30c: 0x65270022  daddiu      $a3, $t1, 0x22
    ctx->pc = 0x2fb30cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)34);
    // 0x2fb310: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb314: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x2fb314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x2fb318: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x2fb318u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x2fb31c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2fb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2fb320: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2fb320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2fb324: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb324u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb328: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb328u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb32c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FB32Cu;
    {
        const bool branch_taken_0x2fb32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB32Cu;
        // 0x2fb330: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb32c) {
            ctx->pc = 0x2FB39Cu;
            goto label_2fb39c;
        }
    }
    ctx->pc = 0x2FB334u;
    // 0x2fb334: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb338: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2fb338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb33c: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x2fb33cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fb340: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x2fb340u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fb344: 0x0  nop
    ctx->pc = 0x2fb344u;
    // NOP
label_2fb348:
    // 0x2fb348: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb34c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb350: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb354: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb358: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb35c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb35cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb360: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb368: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb36c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb370: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb370u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB374u;
    {
        const bool branch_taken_0x2fb374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB374u;
        // 0x2fb378: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb374) {
            ctx->pc = 0x2FB384u;
            goto label_2fb384;
        }
    }
    ctx->pc = 0x2FB37Cu;
    // 0x2fb37c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb380: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb384:
    // 0x2fb384: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb388: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb38c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB38Cu;
    {
        const bool branch_taken_0x2fb38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB38Cu;
        // 0x2fb390: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb38c) {
            ctx->pc = 0x2FB348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb348;
        }
    }
    ctx->pc = 0x2FB394u;
    // 0x2fb394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB394u;
    {
        const bool branch_taken_0x2fb394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB394u;
        // 0x2fb398: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb394) {
            ctx->pc = 0x2FB3ACu;
            goto label_2fb3ac;
        }
    }
    ctx->pc = 0x2FB39Cu;
label_2fb39c:
    // 0x2fb39c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2fb39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3a0: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x2fb3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fb3a4: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x2fb3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fb3a8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb3a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb3ac:
    // 0x2fb3ac: 0x65250003  daddiu      $a1, $t1, 0x3
    ctx->pc = 0x2fb3acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x2fb3b0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb3b4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fb3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fb3b8: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb3bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fb3c0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb3c4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb3c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb3c8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB3C8u;
    {
        const bool branch_taken_0x2fb3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3C8u;
        // 0x2fb3cc: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3c8) {
            ctx->pc = 0x2FB42Cu;
            goto label_2fb42c;
        }
    }
    ctx->pc = 0x2FB3D0u;
    // 0x2fb3d0: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb3d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb3d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fb3d8:
    // 0x2fb3d8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb3dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb3e0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb3e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb3e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb3ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb3ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb3f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb3f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb3f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb3fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb400: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB404u;
    {
        const bool branch_taken_0x2fb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB404u;
        // 0x2fb408: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb404) {
            ctx->pc = 0x2FB414u;
            goto label_2fb414;
        }
    }
    ctx->pc = 0x2FB40Cu;
    // 0x2fb40c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb410: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb414:
    // 0x2fb414: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb418: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb41c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB41Cu;
    {
        const bool branch_taken_0x2fb41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB41Cu;
        // 0x2fb420: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb41c) {
            ctx->pc = 0x2FB3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb3d8;
        }
    }
    ctx->pc = 0x2FB424u;
    // 0x2fb424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB424u;
    {
        const bool branch_taken_0x2fb424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB424u;
        // 0x2fb428: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb424) {
            ctx->pc = 0x2FB434u;
            goto label_2fb434;
        }
    }
    ctx->pc = 0x2FB42Cu;
label_2fb42c:
    // 0x2fb42c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb42cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb430: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb430u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb434:
    // 0x2fb434: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x2fb434u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x2fb438: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb43c: 0x23c7e  dsrl32      $a3, $v0, 17
    ctx->pc = 0x2fb43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fb440: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb440u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb444: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fb444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fb448: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fb448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fb44c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb450: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb450u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb454: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB454u;
    {
        const bool branch_taken_0x2fb454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB454u;
        // 0x2fb458: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb454) {
            ctx->pc = 0x2FB4BCu;
            goto label_2fb4bc;
        }
    }
    ctx->pc = 0x2FB45Cu;
    // 0x2fb45c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb45cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb460: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb464: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x2fb464u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
label_2fb468:
    // 0x2fb468: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb46c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb470: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb474: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb478: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb47c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb47cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb480: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb484: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb488: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb48c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb48cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb490: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb490u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB494u;
    {
        const bool branch_taken_0x2fb494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB494u;
        // 0x2fb498: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb494) {
            ctx->pc = 0x2FB4A4u;
            goto label_2fb4a4;
        }
    }
    ctx->pc = 0x2FB49Cu;
    // 0x2fb49c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb4a0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb4a4:
    // 0x2fb4a4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb4a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb4ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB4ACu;
    {
        const bool branch_taken_0x2fb4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4ACu;
        // 0x2fb4b0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4ac) {
            ctx->pc = 0x2FB468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb468;
        }
    }
    ctx->pc = 0x2FB4B4u;
    // 0x2fb4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB4B4u;
    {
        const bool branch_taken_0x2fb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4B4u;
        // 0x2fb4b8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4b4) {
            ctx->pc = 0x2FB4C8u;
            goto label_2fb4c8;
        }
    }
    ctx->pc = 0x2FB4BCu;
label_2fb4bc:
    // 0x2fb4bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb4c0: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x2fb4c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x2fb4c4: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb4c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb4c8:
    // 0x2fb4c8: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x2fb4c8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x2fb4cc: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb4d0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fb4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fb4d4: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb4d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fb4dc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb4e0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb4e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb4e4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB4E4u;
    {
        const bool branch_taken_0x2fb4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4E4u;
        // 0x2fb4e8: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4e4) {
            ctx->pc = 0x2FB54Cu;
            goto label_2fb54c;
        }
    }
    ctx->pc = 0x2FB4ECu;
    // 0x2fb4ec: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb4f0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb4f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb4f4: 0x0  nop
    ctx->pc = 0x2fb4f4u;
    // NOP
label_2fb4f8:
    // 0x2fb4f8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb4fc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb500: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb504: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb508: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb50c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb50cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb510: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb514: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb518: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb51c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb520: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb520u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB524u;
    {
        const bool branch_taken_0x2fb524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB524u;
        // 0x2fb528: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb524) {
            ctx->pc = 0x2FB534u;
            goto label_2fb534;
        }
    }
    ctx->pc = 0x2FB52Cu;
    // 0x2fb52c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb530: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb534:
    // 0x2fb534: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb538: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb53c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB53Cu;
    {
        const bool branch_taken_0x2fb53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB53Cu;
        // 0x2fb540: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb53c) {
            ctx->pc = 0x2FB4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb4f8;
        }
    }
    ctx->pc = 0x2FB544u;
    // 0x2fb544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB544u;
    {
        const bool branch_taken_0x2fb544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB544u;
        // 0x2fb548: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb544) {
            ctx->pc = 0x2FB554u;
            goto label_2fb554;
        }
    }
    ctx->pc = 0x2FB54Cu;
label_2fb54c:
    // 0x2fb54c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb54cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb550: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb554:
    // 0x2fb554: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x2fb554u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x2fb558: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb55c: 0x2c47e  dsrl32      $t8, $v0, 17
    ctx->pc = 0x2fb55cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fb560: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb560u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb564: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fb564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fb568: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fb568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fb56c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb56cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb570: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb570u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb574: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB574u;
    {
        const bool branch_taken_0x2fb574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB574u;
        // 0x2fb578: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb574) {
            ctx->pc = 0x2FB5DCu;
            goto label_2fb5dc;
        }
    }
    ctx->pc = 0x2FB57Cu;
    // 0x2fb57c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb57cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb580: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb584: 0x0  nop
    ctx->pc = 0x2fb584u;
    // NOP
label_2fb588:
    // 0x2fb588: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb58c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb590: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb594: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb598: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb59c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb59cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb5a0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb5a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb5a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb5ac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb5b0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb5b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB5B4u;
    {
        const bool branch_taken_0x2fb5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B4u;
        // 0x2fb5b8: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5b4) {
            ctx->pc = 0x2FB5C4u;
            goto label_2fb5c4;
        }
    }
    ctx->pc = 0x2FB5BCu;
    // 0x2fb5bc: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb5c0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb5c4:
    // 0x2fb5c4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb5c8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb5c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb5cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB5CCu;
    {
        const bool branch_taken_0x2fb5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5CCu;
        // 0x2fb5d0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5cc) {
            ctx->pc = 0x2FB588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb588;
        }
    }
    ctx->pc = 0x2FB5D4u;
    // 0x2fb5d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB5D4u;
    {
        const bool branch_taken_0x2fb5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5D4u;
        // 0x2fb5d8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5d4) {
            ctx->pc = 0x2FB5E4u;
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB5DCu;
label_2fb5dc:
    // 0x2fb5dc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb5dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5e0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb5e4:
    // 0x2fb5e4: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x2fb5e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x2fb5e8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb5ec: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fb5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fb5f0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb5f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fb5f8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb5fc: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb5fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb600: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB600u;
    {
        const bool branch_taken_0x2fb600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB600u;
        // 0x2fb604: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb600) {
            ctx->pc = 0x2FB664u;
            goto label_2fb664;
        }
    }
    ctx->pc = 0x2FB608u;
    // 0x2fb608: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb60c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fb610:
    // 0x2fb610: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb614: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb618: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb61c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb620: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb624: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb624u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb628: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb62c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb630: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb634: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb638: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb638u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB63Cu;
    {
        const bool branch_taken_0x2fb63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB63Cu;
        // 0x2fb640: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb63c) {
            ctx->pc = 0x2FB64Cu;
            goto label_2fb64c;
        }
    }
    ctx->pc = 0x2FB644u;
    // 0x2fb644: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb648: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb64c:
    // 0x2fb64c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb650: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb654: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB654u;
    {
        const bool branch_taken_0x2fb654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB654u;
        // 0x2fb658: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb654) {
            ctx->pc = 0x2FB610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb610;
        }
    }
    ctx->pc = 0x2FB65Cu;
    // 0x2fb65c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB65Cu;
    {
        const bool branch_taken_0x2fb65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB65Cu;
        // 0x2fb660: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb65c) {
            ctx->pc = 0x2FB66Cu;
            goto label_2fb66c;
        }
    }
    ctx->pc = 0x2FB664u;
label_2fb664:
    // 0x2fb664: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb668: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb66c:
    // 0x2fb66c: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x2fb66cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x2fb670: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb674: 0x255fe  dsrl32      $t2, $v0, 23
    ctx->pc = 0x2fb674u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 23));
    // 0x2fb678: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb678u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb67c: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x2fb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x2fb680: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x2fb680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2fb684: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb684u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb688: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb68c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB68Cu;
    {
        const bool branch_taken_0x2fb68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB68Cu;
        // 0x2fb690: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb68c) {
            ctx->pc = 0x2FB6F4u;
            goto label_2fb6f4;
        }
    }
    ctx->pc = 0x2FB694u;
    // 0x2fb694: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb698: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb69c: 0x0  nop
    ctx->pc = 0x2fb69cu;
    // NOP
label_2fb6a0:
    // 0x2fb6a0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb6a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb6a8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb6ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb6b0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb6b4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb6b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb6b8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb6bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb6c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb6c4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb6c8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB6CCu;
    {
        const bool branch_taken_0x2fb6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6CCu;
        // 0x2fb6d0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6cc) {
            ctx->pc = 0x2FB6DCu;
            goto label_2fb6dc;
        }
    }
    ctx->pc = 0x2FB6D4u;
    // 0x2fb6d4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb6d8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb6dc:
    // 0x2fb6dc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb6e0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb6e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb6e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB6E4u;
    {
        const bool branch_taken_0x2fb6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6E4u;
        // 0x2fb6e8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6e4) {
            ctx->pc = 0x2FB6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb6a0;
        }
    }
    ctx->pc = 0x2FB6ECu;
    // 0x2fb6ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB6ECu;
    {
        const bool branch_taken_0x2fb6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6ECu;
        // 0x2fb6f0: 0xadaa0000  sw          $t2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6ec) {
            ctx->pc = 0x2FB6FCu;
            goto label_2fb6fc;
        }
    }
    ctx->pc = 0x2FB6F4u;
label_2fb6f4:
    // 0x2fb6f4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb6f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6f8: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x2fb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
label_2fb6fc:
    // 0x2fb6fc: 0x65250009  daddiu      $a1, $t1, 0x9
    ctx->pc = 0x2fb6fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)9);
    // 0x2fb700: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb704: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb708: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2fb708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2fb70c: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb70cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb710: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x2fb710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x2fb714: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb714u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb718: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb718u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb71c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB71Cu;
    {
        const bool branch_taken_0x2fb71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB71Cu;
        // 0x2fb720: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb71c) {
            ctx->pc = 0x2FB784u;
            goto label_2fb784;
        }
    }
    ctx->pc = 0x2FB724u;
    // 0x2fb724: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb728: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb72c: 0x0  nop
    ctx->pc = 0x2fb72cu;
    // NOP
label_2fb730:
    // 0x2fb730: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb734: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb738: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb73c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb740: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb744: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb744u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb748: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb74c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb750: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb754: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb758: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb758u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb75c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB75Cu;
    {
        const bool branch_taken_0x2fb75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB75Cu;
        // 0x2fb760: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb75c) {
            ctx->pc = 0x2FB76Cu;
            goto label_2fb76c;
        }
    }
    ctx->pc = 0x2FB764u;
    // 0x2fb764: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb768: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb76c:
    // 0x2fb76c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb770: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb774: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB774u;
    {
        const bool branch_taken_0x2fb774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB774u;
        // 0x2fb778: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb774) {
            ctx->pc = 0x2FB730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb730;
        }
    }
    ctx->pc = 0x2FB77Cu;
    // 0x2fb77c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB77Cu;
    {
        const bool branch_taken_0x2fb77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB77Cu;
        // 0x2fb780: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb77c) {
            ctx->pc = 0x2FB78Cu;
            goto label_2fb78c;
        }
    }
    ctx->pc = 0x2FB784u;
label_2fb784:
    // 0x2fb784: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb788: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2fb78c:
    // 0x2fb78c: 0x6525001e  daddiu      $a1, $t1, 0x1E
    ctx->pc = 0x2fb78cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30);
    // 0x2fb790: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb794: 0x2677e  dsrl32      $t4, $v0, 29
    ctx->pc = 0x2fb794u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x2fb798: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2fb798u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2fb79c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2fb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2fb7a0: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2fb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2fb7a4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb7a8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb7a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb7ac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB7ACu;
    {
        const bool branch_taken_0x2fb7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7ACu;
        // 0x2fb7b0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7ac) {
            ctx->pc = 0x2FB814u;
            goto label_2fb814;
        }
    }
    ctx->pc = 0x2FB7B4u;
    // 0x2fb7b4: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb7b8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7bc: 0x0  nop
    ctx->pc = 0x2fb7bcu;
    // NOP
label_2fb7c0:
    // 0x2fb7c0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2fb7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb7c4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb7c8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb7cc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb7d0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb7d4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2fb7d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb7d8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb7dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb7e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb7e4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb7e8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2fb7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2fb7ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB7ECu;
    {
        const bool branch_taken_0x2fb7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7ECu;
        // 0x2fb7f0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7ec) {
            ctx->pc = 0x2FB7FCu;
            goto label_2fb7fc;
        }
    }
    ctx->pc = 0x2FB7F4u;
    // 0x2fb7f4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb7f8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb7fc:
    // 0x2fb7fc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb800: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb804: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB804u;
    {
        const bool branch_taken_0x2fb804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB804u;
        // 0x2fb808: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb804) {
            ctx->pc = 0x2FB7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb7c0;
        }
    }
    ctx->pc = 0x2FB80Cu;
    // 0x2fb80c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB80Cu;
    {
        const bool branch_taken_0x2fb80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB80Cu;
        // 0x2fb810: 0x1cb1025  or          $v0, $t6, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb80c) {
            ctx->pc = 0x2FB81Cu;
            goto label_2fb81c;
        }
    }
    ctx->pc = 0x2FB814u;
label_2fb814:
    // 0x2fb814: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fb814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb818: 0x1cb1025  or          $v0, $t6, $t3
    ctx->pc = 0x2fb818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_2fb81c:
    // 0x2fb81c: 0x65230003  daddiu      $v1, $t1, 0x3
    ctx->pc = 0x2fb81cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x2fb820: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x2fb820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x2fb824: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2fb824u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2fb828: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x2fb828u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x2fb82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb830: 0x1180002a  beqz        $t4, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FB830u;
    {
        const bool branch_taken_0x2fb830 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB830u;
        // 0x2fb834: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb830) {
            ctx->pc = 0x2FB8DCu;
            goto label_2fb8dc;
        }
    }
    ctx->pc = 0x2FB838u;
    // 0x2fb838: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb83c: 0x0  nop
    ctx->pc = 0x2fb83cu;
    // NOP
label_2fb840:
    // 0x2fb840: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fb840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb844: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2fb844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb848: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fb848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fb84c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2fb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2fb850: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fb850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2fb854: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fb854u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb858: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB858u;
    {
        const bool branch_taken_0x2fb858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB858u;
        // 0x2fb85c: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb858) {
            ctx->pc = 0x2FB8C0u;
            goto label_2fb8c0;
        }
    }
    ctx->pc = 0x2FB860u;
    // 0x2fb860: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2fb860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fb864: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x2fb864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb868: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb868u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb86c: 0x0  nop
    ctx->pc = 0x2fb86cu;
    // NOP
label_2fb870:
    // 0x2fb870: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2fb874: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2fb874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2fb878: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2fb878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb87c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x2fb87cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb880: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x2fb880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2fb884: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2fb884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb88c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2fb88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fb890: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2fb890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb894: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x2fb894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x2fb898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB898u;
    {
        const bool branch_taken_0x2fb898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB898u;
        // 0x2fb89c: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb898) {
            ctx->pc = 0x2FB8A8u;
            goto label_2fb8a8;
        }
    }
    ctx->pc = 0x2FB8A0u;
    // 0x2fb8a0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2fb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2fb8a4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2fb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2fb8a8:
    // 0x2fb8a8: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2fb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2fb8ac: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb8acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb8b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FB8B0u;
    {
        const bool branch_taken_0x2fb8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8B0u;
        // 0x2fb8b4: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8b0) {
            ctx->pc = 0x2FB870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb870;
        }
    }
    ctx->pc = 0x2FB8B8u;
    // 0x2fb8b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB8B8u;
    {
        const bool branch_taken_0x2fb8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8B8u;
        // 0x2fb8bc: 0x65230008  daddiu      $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8b8) {
            ctx->pc = 0x2FB8CCu;
            goto label_2fb8cc;
        }
    }
    ctx->pc = 0x2FB8C0u;
label_2fb8c0:
    // 0x2fb8c0: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2fb8c0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fb8c4: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x2fb8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb8c8: 0x65230008  daddiu      $v1, $t1, 0x8
    ctx->pc = 0x2fb8c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
label_2fb8cc:
    // 0x2fb8cc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2fb8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8d0: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x2fb8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2fb8d4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2FB8D4u;
    {
        const bool branch_taken_0x2fb8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8D4u;
        // 0x2fb8d8: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8d4) {
            ctx->pc = 0x2FB840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb840;
        }
    }
    ctx->pc = 0x2FB8DCu;
label_2fb8dc:
    // 0x2fb8dc: 0x9cc20004  lwu         $v0, 0x4($a2)
    ctx->pc = 0x2fb8dcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2fb8e0: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x2fb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x2fb8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fb8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fb8e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fb8ec: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB8ECu;
    {
        const bool branch_taken_0x2fb8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb8ec) {
            ctx->pc = 0x2FB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB8ECu;
            // 0x2fb8f0: 0xada0000c  sw          $zero, 0xC($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB910u;
            goto label_2fb910;
        }
    }
    ctx->pc = 0x2FB8F4u;
    // 0x2fb8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb8f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2fb8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8fc: 0xada2000c  sw          $v0, 0xC($t5)
    ctx->pc = 0x2fb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 2));
    // 0x2fb900: 0xc0bec2a  jal         func_2FB0A8
    ctx->pc = 0x2FB900u;
    SET_GPR_U32(ctx, 31, 0x2FB908u);
    ctx->pc = 0x2FB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB900u;
    // 0x2fb904: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FB0A8u, 0x2FB900u, 0x2FB908u)) {
        return;
    }
    ctx->pc = 0x2FB908u;
label_2fb908:
    // 0x2fb908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB908u;
    {
        const bool branch_taken_0x2fb908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB908u;
        // 0x2fb90c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb908) {
            ctx->pc = 0x2FB914u;
            goto label_2fb914;
        }
    }
    ctx->pc = 0x2FB910u;
label_2fb910:
    // 0x2fb910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb914:
    // 0x2fb914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb918: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB918u;
        // 0x2fb91c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB920u;
}
