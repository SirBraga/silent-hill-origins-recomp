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

// Function: sub_0020F8B8
// Address: 0x20f8b8 - 0x20faf8
void sub_0020F8B8_0x20f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F8B8_0x20f8b8");
#endif

    switch (ctx->pc) {
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        default: break;
    }

    ctx->pc = 0x20f8b8u;

label_20f8b8:
    // 0x20f8b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20f8bc:
    // 0x20f8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f8c0:
    // 0x20f8c0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x20f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_20f8c4:
    // 0x20f8c4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x20f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_20f8c8:
    // 0x20f8c8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x20f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_20f8cc:
    // 0x20f8cc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x20f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_20f8d0:
    // 0x20f8d0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x20f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_20f8d4:
    // 0x20f8d4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x20f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_20f8d8:
    // 0x20f8d8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20f8dc:
    // 0x20f8dc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x20f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_20f8e0:
    // 0x20f8e0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x20f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_20f8e4:
    // 0x20f8e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20f8e8:
    // 0x20f8e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20f8ec:
    // 0x20f8ec: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
label_20f8f0:
    // 0x20f8f0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_20f8f4:
    // 0x20f8f4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_20f8f8:
    // 0x20f8f8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_20f8fc:
    if (ctx->pc == 0x20F8FCu) {
        ctx->pc = 0x20F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F8u;
        // 0x20f8fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F900u;
        goto label_20f900;
    }
    ctx->pc = 0x20F8F8u;
    {
        const bool branch_taken_0x20f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f8f8) {
            ctx->pc = 0x20F8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F8F8u;
            // 0x20f8fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F914u;
            goto label_20f914;
        }
    }
    ctx->pc = 0x20F900u;
label_20f900:
    // 0x20f900: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f904:
    // 0x20f904: 0x240201fe  addiu       $v0, $zero, 0x1FE
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
label_20f908:
    // 0x20f908: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x20f908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_20f90c:
    // 0x20f90c: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f910:
    if (ctx->pc == 0x20F910u) {
        ctx->pc = 0x20F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F90Cu;
        // 0x20f910: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F914u;
        goto label_20f914;
    }
    ctx->pc = 0x20F90Cu;
    {
        const bool branch_taken_0x20f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F90Cu;
        // 0x20f910: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f90c) {
            ctx->pc = 0x20F91Cu;
            goto label_20f91c;
        }
    }
    ctx->pc = 0x20F914u;
label_20f914:
    // 0x20f914: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x20f914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_20f918:
    // 0x20f918: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_20f91c:
    // 0x20f91c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f920:
    // 0x20f920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f924:
    // 0x20f924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20f924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f928:
    // 0x20f928: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20f92c:
    // 0x20f92c: 0x8c870078  lw          $a3, 0x78($a0)
    ctx->pc = 0x20f92cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_20f930:
    // 0x20f930: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20f934:
    // 0x20f934: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_20f938:
    // 0x20f938: 0x40f809  jalr        $v0
label_20f93c:
    if (ctx->pc == 0x20F93Cu) {
        ctx->pc = 0x20F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F938u;
        // 0x20f93c: 0x24660100  addiu       $a2, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F940u;
        goto label_20f940;
    }
    ctx->pc = 0x20F938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F940u);
        ctx->pc = 0x20F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F938u;
        // 0x20f93c: 0x24660100  addiu       $a2, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F938u, 0x20F940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F940u;
label_20f940:
    // 0x20f940: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f944:
    // 0x20f944: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x20f944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_20f948:
    // 0x20f948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f94c:
    // 0x20f94c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_20f950:
    // 0x20f950: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_20f954:
    if (ctx->pc == 0x20F954u) {
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F950u;
        // 0x20f954: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F958u;
        goto label_20f958;
    }
    ctx->pc = 0x20F950u;
    {
        const bool branch_taken_0x20f950 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F950u;
        // 0x20f954: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f950) {
            ctx->pc = 0x20FAC4u;
            goto label_20fac4;
        }
    }
    ctx->pc = 0x20F958u;
label_20f958:
    // 0x20f958: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f95c:
    // 0x20f95c: 0x0  nop
    ctx->pc = 0x20f95cu;
    // NOP
label_20f960:
    // 0x20f960: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x20f960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20f964:
    // 0x20f964: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x20f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20f968:
    // 0x20f968: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x20f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20f96c:
    // 0x20f96c: 0xe4001a  div         $zero, $a3, $a0
    ctx->pc = 0x20f96cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20f970:
    // 0x20f970: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_20f974:
    if (ctx->pc == 0x20F974u) {
        ctx->pc = 0x20F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F970u;
        // 0x20f974: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F978u;
        goto label_20f978;
    }
    ctx->pc = 0x20F970u;
    {
        const bool branch_taken_0x20f970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f970) {
            ctx->pc = 0x20F974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F970u;
            // 0x20f974: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F978u;
            goto label_20f978;
        }
    }
    ctx->pc = 0x20F978u;
label_20f978:
    // 0x20f978: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x20f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_20f97c:
    // 0x20f97c: 0x1812  mflo        $v1
    ctx->pc = 0x20f97cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_20f980:
    // 0x20f980: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f984:
    if (ctx->pc == 0x20F984u) {
        ctx->pc = 0x20F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F980u;
        // 0x20f984: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F988u;
        goto label_20f988;
    }
    ctx->pc = 0x20F980u;
    {
        const bool branch_taken_0x20f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F980u;
        // 0x20f984: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f980) {
            ctx->pc = 0x20F9A0u;
            goto label_20f9a0;
        }
    }
    ctx->pc = 0x20F988u;
label_20f988:
    // 0x20f988: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f98c:
    // 0x20f98c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_20f990:
    // 0x20f990: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20f994:
    // 0x20f994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f998:
    // 0x20f998: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x20f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
label_20f99c:
    // 0x20f99c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20f9a0:
    // 0x20f9a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f9a4:
    // 0x20f9a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20f9a8:
    // 0x20f9a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20f9a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f9ac:
    // 0x20f9ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20f9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f9b0:
    // 0x20f9b0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20f9b4:
    // 0x20f9b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20f9b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f9b8:
    // 0x20f9b8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20f9bc:
    // 0x20f9bc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x20f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_20f9c0:
    // 0x20f9c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20f9c4:
    // 0x20f9c4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20f9c8:
    // 0x20f9c8: 0x646400ff  daddiu      $a0, $v1, 0xFF
    ctx->pc = 0x20f9c8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)255);
label_20f9cc:
    // 0x20f9cc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x20f9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f9d0:
    // 0x20f9d0: 0xc0ca2b8  jal         func_328AE0
label_20f9d4:
    if (ctx->pc == 0x20F9D4u) {
        ctx->pc = 0x20F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9D0u;
        // 0x20f9d4: 0x7fa70030  sq          $a3, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9D8u;
        goto label_20f9d8;
    }
    ctx->pc = 0x20F9D0u;
    SET_GPR_U32(ctx, 31, 0x20F9D8u);
    ctx->pc = 0x20F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9D0u;
    // 0x20f9d4: 0x7fa70030  sq          $a3, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20F9D0u, 0x20F9D8u)) {
        return;
    }
    ctx->pc = 0x20F9D8u;
label_20f9d8:
    // 0x20f9d8: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x20f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_20f9dc:
    // 0x20f9dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x20f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_20f9e0:
    // 0x20f9e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20f9e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_20f9e4:
    // 0x20f9e4: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x20f9e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f9e8:
    // 0x20f9e8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x20f9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_20f9ec:
    // 0x20f9ec: 0x2713021  addu        $a2, $s3, $s1
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_20f9f0:
    // 0x20f9f0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_20f9f4:
    if (ctx->pc == 0x20F9F4u) {
        ctx->pc = 0x20F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F0u;
        // 0x20f9f4: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9F8u;
        goto label_20f9f8;
    }
    ctx->pc = 0x20F9F0u;
    {
        const bool branch_taken_0x20f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F0u;
        // 0x20f9f4: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9f0) {
            ctx->pc = 0x20FA64u;
            goto label_20fa64;
        }
    }
    ctx->pc = 0x20F9F8u;
label_20f9f8:
    // 0x20f9f8: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x20f9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20f9fc:
    // 0x20f9fc: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_20fa00:
    // 0x20fa00: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fa04:
    // 0x20fa04: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x20fa04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_20fa08:
    // 0x20fa08: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x20fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_20fa0c:
    // 0x20fa0c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x20fa0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20fa10:
    // 0x20fa10: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_20fa14:
    // 0x20fa14: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x20fa14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_20fa18:
    // 0x20fa18: 0x2170018  mult        $zero, $s0, $s7
    ctx->pc = 0x20fa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20fa1c:
    // 0x20fa1c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x20fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_20fa20:
    // 0x20fa20: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x20fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_20fa24:
    // 0x20fa24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20fa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20fa28:
    // 0x20fa28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20fa2c:
    // 0x20fa2c: 0x1012  mflo        $v0
    ctx->pc = 0x20fa2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_20fa30:
    // 0x20fa30: 0x2010  mfhi        $a0
    ctx->pc = 0x20fa30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20fa34:
    // 0x20fa34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20fa38:
    // 0x20fa38: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20fa38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_20fa3c:
    // 0x20fa3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20fa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20fa40:
    // 0x20fa40: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20fa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20fa44:
    // 0x20fa44: 0xc0ca2b8  jal         func_328AE0
label_20fa48:
    if (ctx->pc == 0x20FA48u) {
        ctx->pc = 0x20FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA44u;
        // 0x20fa48: 0x244202d  daddu       $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA4Cu;
        goto label_20fa4c;
    }
    ctx->pc = 0x20FA44u;
    SET_GPR_U32(ctx, 31, 0x20FA4Cu);
    ctx->pc = 0x20FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA44u;
    // 0x20fa48: 0x244202d  daddu       $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20FA44u, 0x20FA4Cu)) {
        return;
    }
    ctx->pc = 0x20FA4Cu;
label_20fa4c:
    // 0x20fa4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x20fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_20fa50:
    // 0x20fa50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20fa50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_20fa54:
    // 0x20fa54: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x20fa54u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20fa58:
    // 0x20fa58: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x20fa58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_20fa5c:
    // 0x20fa5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_20fa60:
    if (ctx->pc == 0x20FA60u) {
        ctx->pc = 0x20FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA5Cu;
        // 0x20fa60: 0x7ba70030  lq          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA64u;
        goto label_20fa64;
    }
    ctx->pc = 0x20FA5Cu;
    {
        const bool branch_taken_0x20fa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA5Cu;
        // 0x20fa60: 0x7ba70030  lq          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa5c) {
            ctx->pc = 0x20FA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa10;
        }
    }
    ctx->pc = 0x20FA64u;
label_20fa64:
    // 0x20fa64: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x20fa64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20fa68:
    // 0x20fa68: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x20fa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_20fa6c:
    // 0x20fa6c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_20fa70:
    if (ctx->pc == 0x20FA70u) {
        ctx->pc = 0x20FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA6Cu;
        // 0x20fa70: 0xa0d50000  sb          $s5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA74u;
        goto label_20fa74;
    }
    ctx->pc = 0x20FA6Cu;
    {
        const bool branch_taken_0x20fa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA6Cu;
        // 0x20fa70: 0xa0d50000  sb          $s5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa6c) {
            ctx->pc = 0x20F9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f9e8;
        }
    }
    ctx->pc = 0x20FA74u;
label_20fa74:
    // 0x20fa74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_20fa78:
    // 0x20fa78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_20fa7c:
    if (ctx->pc == 0x20FA7Cu) {
        ctx->pc = 0x20FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA78u;
        // 0x20fa7c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA80u;
        goto label_20fa80;
    }
    ctx->pc = 0x20FA78u;
    {
        const bool branch_taken_0x20fa78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA78u;
        // 0x20fa7c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa78) {
            ctx->pc = 0x20FAB0u;
            goto label_20fab0;
        }
    }
    ctx->pc = 0x20FA80u;
label_20fa80:
    // 0x20fa80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20fa80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fa84:
    // 0x20fa84: 0x0  nop
    ctx->pc = 0x20fa84u;
    // NOP
label_20fa88:
    // 0x20fa88: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x20fa88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_20fa8c:
    // 0x20fa8c: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_20fa90:
    // 0x20fa90: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_20fa94:
    // 0x20fa94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20fa94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20fa98:
    // 0x20fa98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20fa9c:
    // 0x20fa9c: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x20fa9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_20faa0:
    // 0x20faa0: 0x926200ff  lbu         $v0, 0xFF($s3)
    ctx->pc = 0x20faa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_20faa4:
    // 0x20faa4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_20faa8:
    if (ctx->pc == 0x20FAA8u) {
        ctx->pc = 0x20FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA4u;
        // 0x20faa8: 0xa08200ff  sb          $v0, 0xFF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 255), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAACu;
        goto label_20faac;
    }
    ctx->pc = 0x20FAA4u;
    {
        const bool branch_taken_0x20faa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA4u;
        // 0x20faa8: 0xa08200ff  sb          $v0, 0xFF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 255), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faa4) {
            ctx->pc = 0x20FA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa88;
        }
    }
    ctx->pc = 0x20FAACu;
label_20faac:
    // 0x20faac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20faacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20fab0:
    // 0x20fab0: 0x8fb0000c  lw          $s0, 0xC($sp)
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_20fab4:
    // 0x20fab4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x20fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_20fab8:
    // 0x20fab8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20fab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20fabc:
    // 0x20fabc: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_20fac0:
    if (ctx->pc == 0x20FAC0u) {
        ctx->pc = 0x20FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FABCu;
        // 0x20fac0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAC4u;
        goto label_20fac4;
    }
    ctx->pc = 0x20FABCu;
    {
        const bool branch_taken_0x20fabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FABCu;
        // 0x20fac0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fabc) {
            ctx->pc = 0x20F960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f960;
        }
    }
    ctx->pc = 0x20FAC4u;
label_20fac4:
    // 0x20fac4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x20fac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20fac8:
    // 0x20fac8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x20fac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20facc:
    // 0x20facc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x20faccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20fad0:
    // 0x20fad0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x20fad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20fad4:
    // 0x20fad4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x20fad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20fad8:
    // 0x20fad8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x20fad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20fadc:
    // 0x20fadc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20fadcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20fae0:
    // 0x20fae0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x20fae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20fae4:
    // 0x20fae4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x20fae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20fae8:
    // 0x20fae8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20faec:
    // 0x20faec: 0x3e00008  jr          $ra
label_20faf0:
    if (ctx->pc == 0x20FAF0u) {
        ctx->pc = 0x20FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAECu;
        // 0x20faf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAF4u;
        goto label_20faf4;
    }
    ctx->pc = 0x20FAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAECu;
        // 0x20faf0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FAF4u;
label_20faf4:
    // 0x20faf4: 0x0  nop
    ctx->pc = 0x20faf4u;
    // NOP
    ctx->pc = 0x20faf8u;
}
