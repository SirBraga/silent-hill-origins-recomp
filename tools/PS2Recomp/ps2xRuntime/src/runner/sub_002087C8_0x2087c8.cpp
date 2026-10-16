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

// Function: sub_002087C8
// Address: 0x2087c8 - 0x208bb0
void sub_002087C8_0x2087c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002087C8_0x2087c8");
#endif

    switch (ctx->pc) {
        case 0x2087c8u: goto label_2087c8;
        case 0x2087ccu: goto label_2087cc;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087d4u: goto label_2087d4;
        case 0x2087d8u: goto label_2087d8;
        case 0x2087dcu: goto label_2087dc;
        case 0x2087e0u: goto label_2087e0;
        case 0x2087e4u: goto label_2087e4;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087ecu: goto label_2087ec;
        case 0x2087f0u: goto label_2087f0;
        case 0x2087f4u: goto label_2087f4;
        case 0x2087f8u: goto label_2087f8;
        case 0x2087fcu: goto label_2087fc;
        case 0x208800u: goto label_208800;
        case 0x208804u: goto label_208804;
        case 0x208808u: goto label_208808;
        case 0x20880cu: goto label_20880c;
        case 0x208810u: goto label_208810;
        case 0x208814u: goto label_208814;
        case 0x208818u: goto label_208818;
        case 0x20881cu: goto label_20881c;
        case 0x208820u: goto label_208820;
        case 0x208824u: goto label_208824;
        case 0x208828u: goto label_208828;
        case 0x20882cu: goto label_20882c;
        case 0x208830u: goto label_208830;
        case 0x208834u: goto label_208834;
        case 0x208838u: goto label_208838;
        case 0x20883cu: goto label_20883c;
        case 0x208840u: goto label_208840;
        case 0x208844u: goto label_208844;
        case 0x208848u: goto label_208848;
        case 0x20884cu: goto label_20884c;
        case 0x208850u: goto label_208850;
        case 0x208854u: goto label_208854;
        case 0x208858u: goto label_208858;
        case 0x20885cu: goto label_20885c;
        case 0x208860u: goto label_208860;
        case 0x208864u: goto label_208864;
        case 0x208868u: goto label_208868;
        case 0x20886cu: goto label_20886c;
        case 0x208870u: goto label_208870;
        case 0x208874u: goto label_208874;
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        case 0x2088b0u: goto label_2088b0;
        case 0x2088b4u: goto label_2088b4;
        case 0x2088b8u: goto label_2088b8;
        case 0x2088bcu: goto label_2088bc;
        case 0x2088c0u: goto label_2088c0;
        case 0x2088c4u: goto label_2088c4;
        case 0x2088c8u: goto label_2088c8;
        case 0x2088ccu: goto label_2088cc;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088d4u: goto label_2088d4;
        case 0x2088d8u: goto label_2088d8;
        case 0x2088dcu: goto label_2088dc;
        case 0x2088e0u: goto label_2088e0;
        case 0x2088e4u: goto label_2088e4;
        case 0x2088e8u: goto label_2088e8;
        case 0x2088ecu: goto label_2088ec;
        case 0x2088f0u: goto label_2088f0;
        case 0x2088f4u: goto label_2088f4;
        case 0x2088f8u: goto label_2088f8;
        case 0x2088fcu: goto label_2088fc;
        case 0x208900u: goto label_208900;
        case 0x208904u: goto label_208904;
        case 0x208908u: goto label_208908;
        case 0x20890cu: goto label_20890c;
        case 0x208910u: goto label_208910;
        case 0x208914u: goto label_208914;
        case 0x208918u: goto label_208918;
        case 0x20891cu: goto label_20891c;
        case 0x208920u: goto label_208920;
        case 0x208924u: goto label_208924;
        case 0x208928u: goto label_208928;
        case 0x20892cu: goto label_20892c;
        case 0x208930u: goto label_208930;
        case 0x208934u: goto label_208934;
        case 0x208938u: goto label_208938;
        case 0x20893cu: goto label_20893c;
        case 0x208940u: goto label_208940;
        case 0x208944u: goto label_208944;
        case 0x208948u: goto label_208948;
        case 0x20894cu: goto label_20894c;
        case 0x208950u: goto label_208950;
        case 0x208954u: goto label_208954;
        case 0x208958u: goto label_208958;
        case 0x20895cu: goto label_20895c;
        case 0x208960u: goto label_208960;
        case 0x208964u: goto label_208964;
        case 0x208968u: goto label_208968;
        case 0x20896cu: goto label_20896c;
        case 0x208970u: goto label_208970;
        case 0x208974u: goto label_208974;
        case 0x208978u: goto label_208978;
        case 0x20897cu: goto label_20897c;
        case 0x208980u: goto label_208980;
        case 0x208984u: goto label_208984;
        case 0x208988u: goto label_208988;
        case 0x20898cu: goto label_20898c;
        case 0x208990u: goto label_208990;
        case 0x208994u: goto label_208994;
        case 0x208998u: goto label_208998;
        case 0x20899cu: goto label_20899c;
        case 0x2089a0u: goto label_2089a0;
        case 0x2089a4u: goto label_2089a4;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089acu: goto label_2089ac;
        case 0x2089b0u: goto label_2089b0;
        case 0x2089b4u: goto label_2089b4;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089bcu: goto label_2089bc;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089c8u: goto label_2089c8;
        case 0x2089ccu: goto label_2089cc;
        case 0x2089d0u: goto label_2089d0;
        case 0x2089d4u: goto label_2089d4;
        case 0x2089d8u: goto label_2089d8;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089e0u: goto label_2089e0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089e8u: goto label_2089e8;
        case 0x2089ecu: goto label_2089ec;
        case 0x2089f0u: goto label_2089f0;
        case 0x2089f4u: goto label_2089f4;
        case 0x2089f8u: goto label_2089f8;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a00u: goto label_208a00;
        case 0x208a04u: goto label_208a04;
        case 0x208a08u: goto label_208a08;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a10u: goto label_208a10;
        case 0x208a14u: goto label_208a14;
        case 0x208a18u: goto label_208a18;
        case 0x208a1cu: goto label_208a1c;
        case 0x208a20u: goto label_208a20;
        case 0x208a24u: goto label_208a24;
        case 0x208a28u: goto label_208a28;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a30u: goto label_208a30;
        case 0x208a34u: goto label_208a34;
        case 0x208a38u: goto label_208a38;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a40u: goto label_208a40;
        case 0x208a44u: goto label_208a44;
        case 0x208a48u: goto label_208a48;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a50u: goto label_208a50;
        case 0x208a54u: goto label_208a54;
        case 0x208a58u: goto label_208a58;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a60u: goto label_208a60;
        case 0x208a64u: goto label_208a64;
        case 0x208a68u: goto label_208a68;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a70u: goto label_208a70;
        case 0x208a74u: goto label_208a74;
        case 0x208a78u: goto label_208a78;
        case 0x208a7cu: goto label_208a7c;
        case 0x208a80u: goto label_208a80;
        case 0x208a84u: goto label_208a84;
        case 0x208a88u: goto label_208a88;
        case 0x208a8cu: goto label_208a8c;
        case 0x208a90u: goto label_208a90;
        case 0x208a94u: goto label_208a94;
        case 0x208a98u: goto label_208a98;
        case 0x208a9cu: goto label_208a9c;
        case 0x208aa0u: goto label_208aa0;
        case 0x208aa4u: goto label_208aa4;
        case 0x208aa8u: goto label_208aa8;
        case 0x208aacu: goto label_208aac;
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        default: break;
    }

    ctx->pc = 0x2087c8u;

label_2087c8:
    // 0x2087c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2087c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2087cc:
    // 0x2087cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2087ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2087d0:
    // 0x2087d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2087d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2087d4:
    // 0x2087d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2087d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2087d8:
    // 0x2087d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2087d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2087dc:
    // 0x2087dc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2087dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2087e0:
    // 0x2087e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2087e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2087e4:
    // 0x2087e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2087e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2087e8:
    // 0x2087e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2087e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2087ec:
    // 0x2087ec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2087ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2087f0:
    // 0x2087f0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2087f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2087f4:
    // 0x2087f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2087f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2087f8:
    // 0x2087f8: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x2087f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_2087fc:
    // 0x2087fc: 0x8e750018  lw          $s5, 0x18($s3)
    ctx->pc = 0x2087fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_208800:
    // 0x208800: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x208800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_208804:
    // 0x208804: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208808:
    // 0x208808: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_20880c:
    if (ctx->pc == 0x20880Cu) {
        ctx->pc = 0x20880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208808u;
        // 0x20880c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208810u;
        goto label_208810;
    }
    ctx->pc = 0x208808u;
    {
        const bool branch_taken_0x208808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208808u;
        // 0x20880c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208808) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208810u;
label_208810:
    // 0x208810: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208814:
    // 0x208814: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x208814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_208818:
    // 0x208818: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20881c:
    // 0x20881c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208820:
    // 0x208820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208824:
    // 0x208824: 0x60f809  jalr        $v1
label_208828:
    if (ctx->pc == 0x208828u) {
        ctx->pc = 0x20882Cu;
        goto label_20882c;
    }
    ctx->pc = 0x208824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20882Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208824u, 0x20882Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20882Cu;
label_20882c:
    // 0x20882c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_208830:
    if (ctx->pc == 0x208830u) {
        ctx->pc = 0x208830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20882Cu;
        // 0x208830: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208834u;
        goto label_208834;
    }
    ctx->pc = 0x20882Cu;
    {
        const bool branch_taken_0x20882c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20882c) {
            ctx->pc = 0x208830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20882Cu;
            // 0x208830: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208858u;
            goto label_208858;
        }
    }
    ctx->pc = 0x208834u;
label_208834:
    // 0x208834: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208838:
    // 0x208838: 0x40f809  jalr        $v0
label_20883c:
    if (ctx->pc == 0x20883Cu) {
        ctx->pc = 0x20883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208838u;
        // 0x20883c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208840u;
        goto label_208840;
    }
    ctx->pc = 0x208838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208840u);
        ctx->pc = 0x20883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208838u;
        // 0x20883c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208838u, 0x208840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208840u;
label_208840:
    // 0x208840: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_208844:
    if (ctx->pc == 0x208844u) {
        ctx->pc = 0x208844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208840u;
        // 0x208844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208848u;
        goto label_208848;
    }
    ctx->pc = 0x208840u;
    {
        const bool branch_taken_0x208840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208840u;
        // 0x208844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208840) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208848u;
label_208848:
    // 0x208848: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20884c:
    // 0x20884c: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208850:
    // 0x208850: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208854:
    // 0x208854: 0x0  nop
    ctx->pc = 0x208854u;
    // NOP
label_208858:
    // 0x208858: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20885c:
    // 0x20885c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20885cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208860:
    // 0x208860: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_208864:
    if (ctx->pc == 0x208864u) {
        ctx->pc = 0x208864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208860u;
        // 0x208864: 0x29200  sll         $s2, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208868u;
        goto label_208868;
    }
    ctx->pc = 0x208860u;
    {
        const bool branch_taken_0x208860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208860u;
        // 0x208864: 0x29200  sll         $s2, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208860) {
            ctx->pc = 0x208884u;
            goto label_208884;
        }
    }
    ctx->pc = 0x208868u;
label_208868:
    // 0x208868: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_20886c:
    // 0x20886c: 0x40f809  jalr        $v0
label_208870:
    if (ctx->pc == 0x208870u) {
        ctx->pc = 0x208870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20886Cu;
        // 0x208870: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208874u;
        goto label_208874;
    }
    ctx->pc = 0x20886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208874u);
        ctx->pc = 0x208870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20886Cu;
        // 0x208870: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20886Cu, 0x208874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208874u;
label_208874:
    // 0x208874: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_208878:
    if (ctx->pc == 0x208878u) {
        ctx->pc = 0x208878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208874u;
        // 0x208878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20887Cu;
        goto label_20887c;
    }
    ctx->pc = 0x208874u;
    {
        const bool branch_taken_0x208874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208874u;
        // 0x208878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208874) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x20887Cu;
label_20887c:
    // 0x20887c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x20887cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208880:
    // 0x208880: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208884:
    // 0x208884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208888:
    // 0x208888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20888c:
    // 0x20888c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20888cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208890:
    // 0x208890: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_208894:
    if (ctx->pc == 0x208894u) {
        ctx->pc = 0x208894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208890u;
        // 0x208894: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208898u;
        goto label_208898;
    }
    ctx->pc = 0x208890u;
    {
        const bool branch_taken_0x208890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208890u;
        // 0x208894: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208890) {
            ctx->pc = 0x2088B8u;
            goto label_2088b8;
        }
    }
    ctx->pc = 0x208898u;
label_208898:
    // 0x208898: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_20889c:
    // 0x20889c: 0x40f809  jalr        $v0
label_2088a0:
    if (ctx->pc == 0x2088A0u) {
        ctx->pc = 0x2088A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20889Cu;
        // 0x2088a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088A4u;
        goto label_2088a4;
    }
    ctx->pc = 0x20889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2088A4u);
        ctx->pc = 0x2088A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20889Cu;
        // 0x2088a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20889Cu, 0x2088A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2088A4u;
label_2088a4:
    // 0x2088a4: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_2088a8:
    if (ctx->pc == 0x2088A8u) {
        ctx->pc = 0x2088A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088A4u;
        // 0x2088a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088ACu;
        goto label_2088ac;
    }
    ctx->pc = 0x2088A4u;
    {
        const bool branch_taken_0x2088a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088A4u;
        // 0x2088a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088a4) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x2088ACu;
label_2088ac:
    // 0x2088ac: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2088b0:
    // 0x2088b0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2088b4:
    // 0x2088b4: 0x0  nop
    ctx->pc = 0x2088b4u;
    // NOP
label_2088b8:
    // 0x2088b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2088b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2088bc:
    // 0x2088bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2088bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2088c0:
    // 0x2088c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2088c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2088c4:
    // 0x2088c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2088c8:
    // 0x2088c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2088c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2088cc:
    // 0x2088cc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2088ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_2088d0:
    // 0x2088d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2088d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2088d4:
    // 0x2088d4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2088d8:
    // 0x2088d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2088dc:
    // 0x2088dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2088dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2088e0:
    // 0x2088e0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2088e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2088e4:
    // 0x2088e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2088e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2088e8:
    // 0x2088e8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2088ec:
    // 0x2088ec: 0xc0f809  jalr        $a2
label_2088f0:
    if (ctx->pc == 0x2088F0u) {
        ctx->pc = 0x2088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088ECu;
        // 0x2088f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088F4u;
        goto label_2088f4;
    }
    ctx->pc = 0x2088ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2088F4u);
        ctx->pc = 0x2088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088ECu;
        // 0x2088f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2088ECu, 0x2088F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2088F4u;
label_2088f4:
    // 0x2088f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2088f8:
    // 0x2088f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2088fc:
    // 0x2088fc: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2088fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_208900:
    // 0x208900: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
label_208904:
    if (ctx->pc == 0x208904u) {
        ctx->pc = 0x208904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208900u;
        // 0x208904: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208908u;
        goto label_208908;
    }
    ctx->pc = 0x208900u;
    {
        const bool branch_taken_0x208900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x208900) {
            ctx->pc = 0x208904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208900u;
            // 0x208904: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20891Cu;
            goto label_20891c;
        }
    }
    ctx->pc = 0x208908u;
label_208908:
    // 0x208908: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_20890c:
    if (ctx->pc == 0x20890Cu) {
        ctx->pc = 0x20890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208908u;
        // 0x20890c: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208910u;
        goto label_208910;
    }
    ctx->pc = 0x208908u;
    {
        const bool branch_taken_0x208908 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x20890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208908u;
        // 0x20890c: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208908) {
            ctx->pc = 0x208918u;
            goto label_208918;
        }
    }
    ctx->pc = 0x208910u;
label_208910:
    // 0x208910: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_208914:
    if (ctx->pc == 0x208914u) {
        ctx->pc = 0x208914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208910u;
        // 0x208914: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208918u;
        goto label_208918;
    }
    ctx->pc = 0x208910u;
    {
        const bool branch_taken_0x208910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208910u;
        // 0x208914: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208910) {
            ctx->pc = 0x208938u;
            goto label_208938;
        }
    }
    ctx->pc = 0x208918u;
label_208918:
    // 0x208918: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20891c:
    // 0x20891c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_208920:
    // 0x208920: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208924:
    // 0x208924: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208928:
    // 0x208928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20892c:
    // 0x20892c: 0x60f809  jalr        $v1
label_208930:
    if (ctx->pc == 0x208930u) {
        ctx->pc = 0x208930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20892Cu;
        // 0x208930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208934u;
        goto label_208934;
    }
    ctx->pc = 0x20892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208934u);
        ctx->pc = 0x208930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20892Cu;
        // 0x208930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20892Cu, 0x208934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208934u;
label_208934:
    // 0x208934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_208938:
    // 0x208938: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x208938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20893c:
    // 0x20893c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_208940:
    if (ctx->pc == 0x208940u) {
        ctx->pc = 0x208940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20893Cu;
        // 0x208940: 0xae620148  sw          $v0, 0x148($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208944u;
        goto label_208944;
    }
    ctx->pc = 0x20893Cu;
    {
        const bool branch_taken_0x20893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20893Cu;
        // 0x208940: 0xae620148  sw          $v0, 0x148($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20893c) {
            ctx->pc = 0x208A70u;
            goto label_208a70;
        }
    }
    ctx->pc = 0x208944u;
label_208944:
    // 0x208944: 0x0  nop
    ctx->pc = 0x208944u;
    // NOP
label_208948:
    // 0x208948: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
label_20894c:
    if (ctx->pc == 0x20894Cu) {
        ctx->pc = 0x20894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208948u;
        // 0x20894c: 0x92370000  lbu         $s7, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208950u;
        goto label_208950;
    }
    ctx->pc = 0x208948u;
    {
        const bool branch_taken_0x208948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208948) {
            ctx->pc = 0x20894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208948u;
            // 0x20894c: 0x92370000  lbu         $s7, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208970u;
            goto label_208970;
        }
    }
    ctx->pc = 0x208950u;
label_208950:
    // 0x208950: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208954:
    // 0x208954: 0x40f809  jalr        $v0
label_208958:
    if (ctx->pc == 0x208958u) {
        ctx->pc = 0x208958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208954u;
        // 0x208958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20895Cu;
        goto label_20895c;
    }
    ctx->pc = 0x208954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20895Cu);
        ctx->pc = 0x208958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208954u;
        // 0x208958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208954u, 0x20895Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20895Cu;
label_20895c:
    // 0x20895c: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_208960:
    if (ctx->pc == 0x208960u) {
        ctx->pc = 0x208960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20895Cu;
        // 0x208960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208964u;
        goto label_208964;
    }
    ctx->pc = 0x20895Cu;
    {
        const bool branch_taken_0x20895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20895Cu;
        // 0x208960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20895c) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208964u;
label_208964:
    // 0x208964: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208968:
    // 0x208968: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_20896c:
    // 0x20896c: 0x92370000  lbu         $s7, 0x0($s1)
    ctx->pc = 0x20896cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208970:
    // 0x208970: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208974:
    // 0x208974: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_208978:
    if (ctx->pc == 0x208978u) {
        ctx->pc = 0x208978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208974u;
        // 0x208978: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20897Cu;
        goto label_20897c;
    }
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208974u;
        // 0x208978: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208974) {
            ctx->pc = 0x208998u;
            goto label_208998;
        }
    }
    ctx->pc = 0x20897Cu;
label_20897c:
    // 0x20897c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208980:
    // 0x208980: 0x40f809  jalr        $v0
label_208984:
    if (ctx->pc == 0x208984u) {
        ctx->pc = 0x208984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208980u;
        // 0x208984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208988u;
        goto label_208988;
    }
    ctx->pc = 0x208980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208988u);
        ctx->pc = 0x208984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208980u;
        // 0x208984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208980u, 0x208988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208988u;
label_208988:
    // 0x208988: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_20898c:
    if (ctx->pc == 0x20898Cu) {
        ctx->pc = 0x20898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208988u;
        // 0x20898c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208990u;
        goto label_208990;
    }
    ctx->pc = 0x208988u;
    {
        const bool branch_taken_0x208988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208988u;
        // 0x20898c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208988) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208990u;
label_208990:
    // 0x208990: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208994:
    // 0x208994: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208998:
    // 0x208998: 0x92340000  lbu         $s4, 0x0($s1)
    ctx->pc = 0x208998u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20899c:
    // 0x20899c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2089a0:
    // 0x2089a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2089a4:
    // 0x2089a4: 0x8e7200d8  lw          $s2, 0xD8($s3)
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2089a8:
    // 0x2089a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2089a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2089ac:
    // 0x2089ac: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2089b0:
    // 0x2089b0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2089b4:
    // 0x2089b4: 0x16f080  sll         $fp, $s6, 2
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2089b8:
    // 0x2089b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2089bc:
    // 0x2089bc: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
label_2089c0:
    if (ctx->pc == 0x2089C0u) {
        ctx->pc = 0x2089C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089BCu;
        // 0x2089c0: 0x2676014c  addiu       $s6, $s3, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089C4u;
        goto label_2089c4;
    }
    ctx->pc = 0x2089BCu;
    {
        const bool branch_taken_0x2089bc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2089C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089BCu;
        // 0x2089c0: 0x2676014c  addiu       $s6, $s3, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089bc) {
            ctx->pc = 0x2089E0u;
            goto label_2089e0;
        }
    }
    ctx->pc = 0x2089C4u;
label_2089c4:
    // 0x2089c4: 0x0  nop
    ctx->pc = 0x2089c4u;
    // NOP
label_2089c8:
    // 0x2089c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2089cc:
    // 0x2089cc: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
label_2089d0:
    if (ctx->pc == 0x2089D0u) {
        ctx->pc = 0x2089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089CCu;
        // 0x2089d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089D4u;
        goto label_2089d4;
    }
    ctx->pc = 0x2089CCu;
    {
        const bool branch_taken_0x2089cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089CCu;
        // 0x2089d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089cc) {
            ctx->pc = 0x208A04u;
            goto label_208a04;
        }
    }
    ctx->pc = 0x2089D4u;
label_2089d4:
    // 0x2089d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2089d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2089d8:
    // 0x2089d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2089dc:
    if (ctx->pc == 0x2089DCu) {
        ctx->pc = 0x2089DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089D8u;
        // 0x2089dc: 0x26520054  addiu       $s2, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089E0u;
        goto label_2089e0;
    }
    ctx->pc = 0x2089D8u;
    {
        const bool branch_taken_0x2089d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2089DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089D8u;
        // 0x2089dc: 0x26520054  addiu       $s2, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089d8) {
            ctx->pc = 0x2089C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2089c8;
        }
    }
    ctx->pc = 0x2089E0u;
label_2089e0:
    // 0x2089e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2089e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2089e4:
    // 0x2089e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2089e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2089e8:
    // 0x2089e8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2089e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2089ec:
    // 0x2089ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2089ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2089f0:
    // 0x2089f0: 0xac570018  sw          $s7, 0x18($v0)
    ctx->pc = 0x2089f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 23));
label_2089f4:
    // 0x2089f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2089f8:
    // 0x2089f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2089fc:
    // 0x2089fc: 0x40f809  jalr        $v0
label_208a00:
    if (ctx->pc == 0x208A00u) {
        ctx->pc = 0x208A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089FCu;
        // 0x208a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A04u;
        goto label_208a04;
    }
    ctx->pc = 0x2089FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208A04u);
        ctx->pc = 0x208A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089FCu;
        // 0x208a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089FCu, 0x208A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208A04u;
label_208a04:
    // 0x208a04: 0x2de1821  addu        $v1, $s6, $fp
    ctx->pc = 0x208a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_208a08:
    // 0x208a08: 0x3284000f  andi        $a0, $s4, 0xF
    ctx->pc = 0x208a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_208a0c:
    // 0x208a0c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x208a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_208a10:
    // 0x208a10: 0x141102  srl         $v0, $s4, 4
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 4));
label_208a14:
    // 0x208a14: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x208a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_208a18:
    // 0x208a18: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x208a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_208a1c:
    // 0x208a1c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208a20:
    // 0x208a20: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_208a24:
    // 0x208a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208a28:
    // 0x208a28: 0xacd70018  sw          $s7, 0x18($a2)
    ctx->pc = 0x208a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 23));
label_208a2c:
    // 0x208a2c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x208a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_208a30:
    // 0x208a30: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_208a34:
    // 0x208a34: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_208a38:
    // 0x208a38: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_208a3c:
    // 0x208a3c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208a40:
    // 0x208a40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208a44:
    // 0x208a44: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x208a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
label_208a48:
    // 0x208a48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x208a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208a4c:
    // 0x208a4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_208a50:
    // 0x208a50: 0x40f809  jalr        $v0
label_208a54:
    if (ctx->pc == 0x208A54u) {
        ctx->pc = 0x208A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A50u;
        // 0x208a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A58u;
        goto label_208a58;
    }
    ctx->pc = 0x208A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208A58u);
        ctx->pc = 0x208A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A50u;
        // 0x208a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A50u, 0x208A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208A58u;
label_208a58:
    // 0x208a58: 0x8fb60004  lw          $s6, 0x4($sp)
    ctx->pc = 0x208a58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_208a5c:
    // 0x208a5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_208a60:
    // 0x208a60: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x208a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_208a64:
    // 0x208a64: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_208a68:
    if (ctx->pc == 0x208A68u) {
        ctx->pc = 0x208A6Cu;
        goto label_208a6c;
    }
    ctx->pc = 0x208A64u;
    {
        const bool branch_taken_0x208a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208a64) {
            ctx->pc = 0x208948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208948;
        }
    }
    ctx->pc = 0x208A6Cu;
label_208a6c:
    // 0x208a6c: 0x0  nop
    ctx->pc = 0x208a6cu;
    // NOP
label_208a70:
    // 0x208a70: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
label_208a74:
    if (ctx->pc == 0x208A74u) {
        ctx->pc = 0x208A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A70u;
        // 0x208a74: 0x92340000  lbu         $s4, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A78u;
        goto label_208a78;
    }
    ctx->pc = 0x208A70u;
    {
        const bool branch_taken_0x208a70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208a70) {
            ctx->pc = 0x208A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A70u;
            // 0x208a74: 0x92340000  lbu         $s4, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A98u;
            goto label_208a98;
        }
    }
    ctx->pc = 0x208A78u;
label_208a78:
    // 0x208a78: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208a7c:
    // 0x208a7c: 0x40f809  jalr        $v0
label_208a80:
    if (ctx->pc == 0x208A80u) {
        ctx->pc = 0x208A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A7Cu;
        // 0x208a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A84u;
        goto label_208a84;
    }
    ctx->pc = 0x208A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208A84u);
        ctx->pc = 0x208A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A7Cu;
        // 0x208a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A7Cu, 0x208A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208A84u;
label_208a84:
    // 0x208a84: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_208a88:
    if (ctx->pc == 0x208A88u) {
        ctx->pc = 0x208A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A84u;
        // 0x208a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A8Cu;
        goto label_208a8c;
    }
    ctx->pc = 0x208A84u;
    {
        const bool branch_taken_0x208a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A84u;
        // 0x208a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a84) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208A8Cu;
label_208a8c:
    // 0x208a8c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208a90:
    // 0x208a90: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208a94:
    // 0x208a94: 0x92340000  lbu         $s4, 0x0($s1)
    ctx->pc = 0x208a94u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208a98:
    // 0x208a98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208a9c:
    // 0x208a9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208aa0:
    // 0x208aa0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_208aa4:
    if (ctx->pc == 0x208AA4u) {
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0xae740190  sw          $s4, 0x190($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AA8u;
        goto label_208aa8;
    }
    ctx->pc = 0x208AA0u;
    {
        const bool branch_taken_0x208aa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0xae740190  sw          $s4, 0x190($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aa0) {
            ctx->pc = 0x208AC8u;
            goto label_208ac8;
        }
    }
    ctx->pc = 0x208AA8u;
label_208aa8:
    // 0x208aa8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208aac:
    // 0x208aac: 0x40f809  jalr        $v0
label_208ab0:
    if (ctx->pc == 0x208AB0u) {
        ctx->pc = 0x208AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AACu;
        // 0x208ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AB4u;
        goto label_208ab4;
    }
    ctx->pc = 0x208AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208AB4u);
        ctx->pc = 0x208AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AACu;
        // 0x208ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AACu, 0x208AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208AB4u;
label_208ab4:
    // 0x208ab4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_208ab8:
    if (ctx->pc == 0x208AB8u) {
        ctx->pc = 0x208AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB4u;
        // 0x208ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ABCu;
        goto label_208abc;
    }
    ctx->pc = 0x208AB4u;
    {
        const bool branch_taken_0x208ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB4u;
        // 0x208ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ab4) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208ABCu;
label_208abc:
    // 0x208abc: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x208abcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208ac0:
    // 0x208ac0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208ac4:
    // 0x208ac4: 0x0  nop
    ctx->pc = 0x208ac4u;
    // NOP
label_208ac8:
    // 0x208ac8: 0x92340000  lbu         $s4, 0x0($s1)
    ctx->pc = 0x208ac8u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208acc:
    // 0x208acc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208ad0:
    // 0x208ad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208ad4:
    // 0x208ad4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_208ad8:
    if (ctx->pc == 0x208AD8u) {
        ctx->pc = 0x208AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD4u;
        // 0x208ad8: 0xae740194  sw          $s4, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ADCu;
        goto label_208adc;
    }
    ctx->pc = 0x208AD4u;
    {
        const bool branch_taken_0x208ad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD4u;
        // 0x208ad8: 0xae740194  sw          $s4, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ad4) {
            ctx->pc = 0x208AFCu;
            goto label_208afc;
        }
    }
    ctx->pc = 0x208ADCu;
label_208adc:
    // 0x208adc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x208adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_208ae0:
    // 0x208ae0: 0x40f809  jalr        $v0
label_208ae4:
    if (ctx->pc == 0x208AE4u) {
        ctx->pc = 0x208AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE0u;
        // 0x208ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AE8u;
        goto label_208ae8;
    }
    ctx->pc = 0x208AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208AE8u);
        ctx->pc = 0x208AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE0u;
        // 0x208ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AE0u, 0x208AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208AE8u;
label_208ae8:
    // 0x208ae8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_208aec:
    if (ctx->pc == 0x208AECu) {
        ctx->pc = 0x208AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE8u;
        // 0x208aec: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AF0u;
        goto label_208af0;
    }
    ctx->pc = 0x208AE8u;
    {
        const bool branch_taken_0x208ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ae8) {
            ctx->pc = 0x208AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208AE8u;
            // 0x208aec: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208AF8u;
            goto label_208af8;
        }
    }
    ctx->pc = 0x208AF0u;
label_208af0:
    // 0x208af0: 0x10000023  b           . + 4 + (0x23 << 2)
label_208af4:
    if (ctx->pc == 0x208AF4u) {
        ctx->pc = 0x208AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AF0u;
        // 0x208af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AF8u;
        goto label_208af8;
    }
    ctx->pc = 0x208AF0u;
    {
        const bool branch_taken_0x208af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AF0u;
        // 0x208af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208af0) {
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208AF8u;
label_208af8:
    // 0x208af8: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_208afc:
    // 0x208afc: 0x92340000  lbu         $s4, 0x0($s1)
    ctx->pc = 0x208afcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208b00:
    // 0x208b00: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208b04:
    // 0x208b04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208b08:
    // 0x208b08: 0x141102  srl         $v0, $s4, 4
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 4));
label_208b0c:
    // 0x208b0c: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x208b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_208b10:
    // 0x208b10: 0xae620198  sw          $v0, 0x198($s3)
    ctx->pc = 0x208b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 2));
label_208b14:
    // 0x208b14: 0xae63019c  sw          $v1, 0x19C($s3)
    ctx->pc = 0x208b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 3));
label_208b18:
    // 0x208b18: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x208b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208b1c:
    // 0x208b1c: 0x24080069  addiu       $t0, $zero, 0x69
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_208b20:
    // 0x208b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208b24:
    // 0x208b24: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
label_208b28:
    // 0x208b28: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x208b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_208b2c:
    // 0x208b2c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x208b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_208b30:
    // 0x208b30: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_208b34:
    // 0x208b34: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208b34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_208b38:
    // 0x208b38: 0x8e630198  lw          $v1, 0x198($s3)
    ctx->pc = 0x208b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
label_208b3c:
    // 0x208b3c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208b40:
    // 0x208b40: 0x8e62019c  lw          $v0, 0x19C($s3)
    ctx->pc = 0x208b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 412)));
label_208b44:
    // 0x208b44: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208b44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_208b48:
    // 0x208b48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x208b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208b4c:
    // 0x208b4c: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x208b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_208b50:
    // 0x208b50: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208b54:
    // 0x208b54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_208b58:
    // 0x208b58: 0x60f809  jalr        $v1
label_208b5c:
    if (ctx->pc == 0x208B5Cu) {
        ctx->pc = 0x208B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B58u;
        // 0x208b5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B60u;
        goto label_208b60;
    }
    ctx->pc = 0x208B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208B60u);
        ctx->pc = 0x208B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B58u;
        // 0x208b5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B58u, 0x208B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208B60u;
label_208b60:
    // 0x208b60: 0x8e6401b8  lw          $a0, 0x1B8($s3)
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
label_208b64:
    // 0x208b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208b68:
    // 0x208b68: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x208b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_208b6c:
    // 0x208b6c: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x208b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_208b70:
    // 0x208b70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_208b74:
    // 0x208b74: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x208b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_208b78:
    // 0x208b78: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x208b78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_208b7c:
    // 0x208b7c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x208b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_208b80:
    // 0x208b80: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x208b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_208b84:
    // 0x208b84: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x208b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_208b88:
    // 0x208b88: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x208b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_208b8c:
    // 0x208b8c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x208b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_208b90:
    // 0x208b90: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x208b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_208b94:
    // 0x208b94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x208b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_208b98:
    // 0x208b98: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x208b98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_208b9c:
    // 0x208b9c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x208b9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208ba0:
    // 0x208ba0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x208ba0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208ba4:
    // 0x208ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_208ba8:
    // 0x208ba8: 0x3e00008  jr          $ra
label_208bac:
    if (ctx->pc == 0x208BACu) {
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BB0u;
        goto label_fallthrough_0x208ba8;
    }
    ctx->pc = 0x208BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208ba8:
    ctx->pc = 0x208BB0u;
}
